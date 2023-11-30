/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_zvl4096b -mabi=lp64d -O3 --param=riscv-autovec-lmul=m8" } */

#include "def.h"

DEF_TRAILING (v8sf, float, 8, var0, var1, var2, var3, var3, var3, var3, var3)
DEF_TRAILING (v16sf, float, 16, var0, var1, var2, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3)
DEF_TRAILING (v32sf, float, 32, var0, var1, var2, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3)
DEF_TRAILING (v64sf, float, 64, var0, var1, var2, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3)
DEF_TRAILING (v128sf, float, 128, var0, var1, var2, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
	    var3, var3, var3, var3, var3, var3, var3, var3, var3, var3)
DEF_TRAILING (
  v256sf, float, 256, var0, var1, var2, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3)
DEF_TRAILING (
  v512sf, float, 512, var0, var1, var2, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3)
DEF_TRAILING (
  v1024sf, float, 1024, var0, var1, var2, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3, var3,
  var3)

/* { dg-final { scan-assembler-times {vfslide1up\.vf} 24 } } */