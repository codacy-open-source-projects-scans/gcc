/* { dg-do compile } */
/* { dg-require-effective-target vect_int } */
/* { dg-require-effective-target powerpc_altivec_ok { target { powerpc*-*-* } } } */
/* { dg-require-effective-target sse2 { target { i?86-*-* x86_64-*-* } } } */
/* { dg-additional-options "-O2 -ffast-math -fdump-tree-reassoc1" } */
/* { dg-additional-options "-maltivec" { target { powerpc*-*-* } } } */
/* { dg-additional-options "-msse2" { target { i?86-*-* x86_64-*-* } } } */

/* To test reassoc can undistribute vector bit_field_ref on bitwise AND.

   v1, v2, v3, v4 of type vector int.

   reassoc transforms

     accumulator &= v1[0] & v1[1] & v1[2] & v1[3] &
                    v2[0] & v2[1] & v2[2] & v2[3] &
                    v3[0] & v3[1] & v3[2] & v3[3] &
                    v4[0] & v4[1] & v4[2] & v4[3] ;

   into:

     T = v1 & v2 & v3 & v4;
     accumulator &= T[0] & T[1] & T[2] & T[3];

   Fewer bit_field_refs, only four for 128 or more bits vector.  */

typedef int v4si __attribute__ ((vector_size (16)));
int
test (int accumulator, v4si v1, v4si v2, v4si v3, v4si v4)
{
  accumulator &= v1[0] & v1[1] & v1[2] & v1[3];
  accumulator &= v2[0] & v2[1] & v2[2] & v2[3];
  accumulator &= v3[0] & v3[1] & v3[2] & v3[3];
  accumulator &= v4[0] & v4[1] & v4[2] & v4[3];
  return accumulator;
}
/* { dg-final { scan-tree-dump-times "BIT_FIELD_REF" 4 "reassoc1" { target { powerpc*-*-* i?86-*-* x86_64-*-* } } } } */
