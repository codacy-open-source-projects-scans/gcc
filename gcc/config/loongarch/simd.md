;; Machine Description for LoongArch SIMD instructions for GNU compiler.
;; Copyright (C) 2023 Free Software Foundation, Inc.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

;; Integer modes supported by LSX.
(define_mode_iterator ILSX    [V2DI V4SI V8HI V16QI])

;; Integer modes supported by LASX.
(define_mode_iterator ILASX   [V4DI V8SI V16HI V32QI])

;; FP modes supported by LSX
(define_mode_iterator FLSX    [V2DF V4SF])

;; FP modes supported by LASX
(define_mode_iterator FLASX   [V4DF V8SF])

;; All integer modes available
(define_mode_iterator IVEC    [(ILSX "ISA_HAS_LSX") (ILASX "ISA_HAS_LASX")])

;; All FP modes available
(define_mode_iterator FVEC    [(FLSX "ISA_HAS_LSX") (FLASX "ISA_HAS_LASX")])

;; Mnemonic prefix, "x" for LASX modes.
(define_mode_attr x [(V2DI "") (V4SI "") (V8HI "") (V16QI "")
		     (V2DF "") (V4SF "")
		     (V4DI "x") (V8SI "x") (V16HI "x") (V32QI "x")
		     (V4DF "x") (V8SF "x")])

;; Modifier for vector register, "w" for LSX modes, "u" for LASX modes.
(define_mode_attr wu [(V2DI "w") (V4SI "w") (V8HI "w") (V16QI "w")
		      (V2DF "w") (V4SF "w")
		      (V4DI "u") (V8SI "u") (V16HI "u") (V32QI "u")
		      (V4DF "u") (V8SF "u")])

;; define_insn name prefix, "lsx" or "lasx"
(define_mode_attr simd_isa
  [(V2DI "lsx") (V4SI "lsx") (V8HI "lsx") (V16QI "lsx")
   (V2DF "lsx") (V4SF "lsx")
   (V4DI "lasx") (V8SI "lasx") (V16HI "lasx") (V32QI "lasx")
   (V4DF "lasx") (V8SF "lasx")])

;; Widen integer modes for intermediate values in RTX pattern.
(define_mode_attr WVEC [(V2DI "V2TI") (V4DI "V4TI")
			(V4SI "V4DI") (V8SI "V8DI")
			(V8HI "V8SI") (V16HI "V16SI")
			(V16QI "V16HI") (V32QI "V32HI")])

;; Integer vector modes with the same length and unit size as a mode.
(define_mode_attr VIMODE [(V2DI "V2DI") (V4SI "V4SI")
			  (V8HI "V8HI") (V16QI "V16QI")
			  (V2DF "V2DI") (V4SF "V4SI")
			  (V4DI "V4DI") (V8SI "V8SI")
			  (V16HI "V16HI") (V32QI "V32QI")
			  (V4DF "V4DI") (V8SF "V8SI")])

;; Lower-case version.
(define_mode_attr vimode [(V2DF "v2di") (V4SF "v4si")
			  (V4DF "v4di") (V8SF "v8si")])

;; Suffix for LSX or LASX instructions.
(define_mode_attr simdfmt [(V2DF "d") (V4DF "d")
			   (V4SF "s") (V8SF "s")
			   (V2DI "d") (V4DI "d")
			   (V4SI "w") (V8SI "w")
			   (V8HI "h") (V16HI "h")
			   (V16QI "b") (V32QI "b")])

;; Suffix for integer mode in LSX or LASX instructions with FP input but
;; integer output.
(define_mode_attr simdifmt_for_f [(V2DF "l") (V4DF "l")
				  (V4SF "w") (V8SF "w")])

;; Size of vector elements in bits.
(define_mode_attr elmbits [(V2DI "64") (V4DI "64")
			   (V4SI "32") (V8SI "32")
			   (V8HI "16") (V16HI "16")
			   (V16QI "8") (V32QI "8")])

;; This attribute is used to form an immediate operand constraint using
;; "const_<bitimm>_operand".
(define_mode_attr bitimm [(V16QI "uimm3") (V32QI "uimm3")
			  (V8HI  "uimm4") (V16HI "uimm4")
			  (V4SI  "uimm5") (V8SI "uimm5")
			  (V2DI  "uimm6") (V4DI "uimm6")])

;; =======================================================================
;; For many LASX instructions, the only difference of it from the LSX
;; counterpart is the length of vector operands.  Describe these LSX/LASX
;; instruction here so we can avoid duplicating logics.
;; =======================================================================

;;
;; FP vector rounding instructions
;;

(define_c_enum "unspec"
  [UNSPEC_SIMD_FRINTRP
   UNSPEC_SIMD_FRINTRZ
   UNSPEC_SIMD_FRINT
   UNSPEC_SIMD_FRINTRM
   UNSPEC_SIMD_FRINTRNE])

(define_int_iterator SIMD_FRINT
  [UNSPEC_SIMD_FRINTRP
   UNSPEC_SIMD_FRINTRZ
   UNSPEC_SIMD_FRINT
   UNSPEC_SIMD_FRINTRM
   UNSPEC_SIMD_FRINTRNE])

(define_int_attr simd_frint_rounding
  [(UNSPEC_SIMD_FRINTRP		"rp")
   (UNSPEC_SIMD_FRINTRZ		"rz")
   (UNSPEC_SIMD_FRINT		"")
   (UNSPEC_SIMD_FRINTRM		"rm")
   (UNSPEC_SIMD_FRINTRNE	"rne")])

;; All these, but rint, are controlled by -ffp-int-builtin-inexact.
;; Note: nearbyint is NOT allowed to raise FE_INEXACT even if
;; -ffp-int-builtin-inexact, but rint is ALLOWED to raise it even if
;; -fno-fp-int-builtin-inexact.
(define_int_attr simd_frint_pattern
  [(UNSPEC_SIMD_FRINTRP		"ceil")
   (UNSPEC_SIMD_FRINTRZ		"btrunc")
   (UNSPEC_SIMD_FRINT		"rint")
   (UNSPEC_SIMD_FRINTRNE	"roundeven")
   (UNSPEC_SIMD_FRINTRM		"floor")])

;; <x>vfrint.{/rp/rz/rm}
(define_insn "<simd_isa>_<x>vfrint<simd_frint_rounding>_<simdfmt>"
  [(set (match_operand:FVEC 0 "register_operand" "=f")
	(unspec:FVEC [(match_operand:FVEC 1 "register_operand" "f")]
		     SIMD_FRINT))]
  ""
  "<x>vfrint<simd_frint_rounding>.<simdfmt>\t%<wu>0,%<wu>1"
  [(set_attr "type" "simd_fcvt")
   (set_attr "mode" "<MODE>")])

;; Expand the standard-named patterns to <x>vfrint instructions if
;; raising inexact exception is allowed.

(define_expand "<simd_frint_pattern><mode>2"
  [(set (match_operand:FVEC 0 "register_operand" "=f")
	(unspec:FVEC [(match_operand:FVEC 1 "register_operand" "f")]
		     SIMD_FRINT))]
   "<SIMD_FRINT> == UNSPEC_SIMD_FRINT ||
    flag_fp_int_builtin_inexact ||
    !flag_trapping_math")

;; ftrunc is like btrunc, but it's allowed to raise inexact exception
;; even if -fno-fp-int-builtin-inexact.
(define_expand "ftrunc<mode>2"
  [(set (match_operand:FVEC 0 "register_operand" "=f")
	(unspec:FVEC [(match_operand:FVEC 1 "register_operand" "f")]
		     UNSPEC_SIMD_FRINTRZ))]
  "")

;; Use LSX for scalar ceil/floor/trunc/roundeven when -mlsx and -ffp-int-
;; builtin-inexact.  The base FP instruction set lacks these operations.
;; Yes we are wasting 50% or even 75% of the CPU horsepower, but it's still
;; much faster than calling a libc function: on LA464 and LA664 there is a
;; 3x ~ 5x speed up.
;;
;; Note that a vreplvei instruction is needed or we'll also operate on the
;; junk in high bits of the vector register and produce random FP exceptions.

(define_int_iterator LSX_SCALAR_FRINT
  [UNSPEC_SIMD_FRINTRP
   UNSPEC_SIMD_FRINTRZ
   UNSPEC_SIMD_FRINTRM
   UNSPEC_SIMD_FRINTRNE])

(define_mode_attr VLSX_FOR_FMODE [(DF "V2DF") (SF "V4SF")])

(define_expand "<simd_frint_pattern><mode>2"
  [(set (match_dup 2)
     (vec_duplicate:<VLSX_FOR_FMODE>
       (match_operand:ANYF 1 "register_operand")))
   (set (match_dup 2)
	(unspec:<VLSX_FOR_FMODE> [(match_dup 2)] LSX_SCALAR_FRINT))
   (set (match_operand:ANYF 0 "register_operand")
	(vec_select:ANYF (match_dup 2) (parallel [(const_int 0)])))]
  "ISA_HAS_LSX && (flag_fp_int_builtin_inexact || !flag_trapping_math)"
  "operands[2] = gen_reg_rtx (<VLSX_FOR_FMODE>mode);")

;; <x>vftint.{/rp/rz/rm}
(define_insn
  "<simd_isa>_<x>vftint<simd_frint_rounding>_<simdifmt_for_f>_<simdfmt>"
  [(set (match_operand:<VIMODE> 0 "register_operand" "=f")
	(fix:<VIMODE>
	  (unspec:FVEC [(match_operand:FVEC 1 "register_operand" "f")]
		       SIMD_FRINT)))]
  ""
  "<x>vftint<simd_frint_rounding>.<simdifmt_for_f>.<simdfmt>\t%<wu>0,%<wu>1"
  [(set_attr "type" "simd_fcvt")
   (set_attr "mode" "<MODE>")])

;; Expand the standard-named patterns to <x>vftint instructions if
;; raising inexact exception.

(define_expand "l<simd_frint_pattern><mode><vimode>2"
  [(set (match_operand:<VIMODE> 0 "register_operand" "=f")
	(fix:<VIMODE>
	  (unspec:FVEC [(match_operand:FVEC 1 "register_operand" "f")]
		       SIMD_FRINT)))]
   "<SIMD_FRINT> == UNSPEC_SIMD_FRINT ||
    flag_fp_int_builtin_inexact ||
    !flag_trapping_math")

;; fix_trunc is allowed to raise inexact exception even if
;; -fno-fp-int-builtin-inexact.  Because the middle end trys to match
;; (FIX x) and it does not know (FIX (UNSPEC_SIMD_FRINTRZ x)), we need
;; to use define_insn_and_split instead of define_expand (expanders are
;; not considered during matching).
(define_insn_and_split "fix_trunc<mode><vimode>2"
  [(set (match_operand:<VIMODE> 0 "register_operand" "=f")
	(fix:<VIMODE> (match_operand:FVEC 1 "register_operand" "f")))]
  ""
  "#"
  ""
  [(const_int 0)]
  {
    emit_insn (gen_<simd_isa>_<x>vftintrz_<simdifmt_for_f>_<simdfmt> (
      operands[0], operands[1]));
    DONE;
  }
  [(set_attr "type" "simd_fcvt")
   (set_attr "mode" "<MODE>")])

;; <x>vmuh.{b/h/w/d}

(define_code_attr muh
  [(sign_extend "smul_highpart")
   (zero_extend "umul_highpart")])

(define_insn "<su>mul<mode>3_highpart"
  [(set (match_operand:IVEC 0 "register_operand" "=f")
	(<muh>:IVEC (match_operand:IVEC 1 "register_operand" "f")
		    (match_operand:IVEC 2 "register_operand" "f")))
   (any_extend (const_int 0))]
  ""
  "<x>vmuh.<simdfmt><u>\t%<wu>0,%<wu>1,%<wu>2"
  [(set_attr "type" "simd_int_arith")
   (set_attr "mode" "<MODE>")])

;; <x>vrotr.{b/h/w/d}

(define_insn "vrotr<mode>3"
  [(set (match_operand:IVEC 0 "register_operand" "=f")
	(rotatert:IVEC (match_operand:IVEC 1 "register_operand" "f")
		       (match_operand:IVEC 2 "register_operand" "f")))]
  ""
  "<x>vrotr.<simdfmt>\t%<wu>0,%<wu>1,%<wu>2"
  [(set_attr "type" "simd_int_arith")
   (set_attr "mode" "<MODE>")])

;; <x>vrotri.{b/h/w/d}

(define_insn "rotr<mode>3"
  [(set (match_operand:IVEC 0 "register_operand" "=f")
	(rotatert:IVEC (match_operand:IVEC 1 "register_operand" "f")
		       (match_operand:SI 2 "const_<bitimm>_operand")))]
  ""
  "<x>vrotri.<simdfmt>\t%<wu>0,%<wu>1,%2";
  [(set_attr "type" "simd_int_arith")
   (set_attr "mode" "<MODE>")])

; The LoongArch SX Instructions.
(include "lsx.md")

; The LoongArch ASX Instructions.
(include "lasx.md")