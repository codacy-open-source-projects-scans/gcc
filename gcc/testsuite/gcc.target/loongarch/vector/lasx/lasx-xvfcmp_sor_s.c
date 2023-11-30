/* { dg-do run } */
/* { dg-options "-mlasx -w -fno-strict-aliasing" } */
#include "../simd_correctness_check.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_op0, __m256i_op1, __m256i_op2, __m256i_out, __m256i_result;
  __m256 __m256_op0, __m256_op1, __m256_op2, __m256_out, __m256_result;
  __m256d __m256d_op0, __m256d_op1, __m256d_op2, __m256d_out, __m256d_result;

  int int_op0, int_op1, int_op2, int_out, int_result, i = 1, fail;
  long int long_op0, long_op1, long_op2, lont_out, lont_result;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000001;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000001;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000001;
  *((int *)&__m256_op0[1]) = 0x80000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffff00000000;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x000000ff;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x000000ff;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000064;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000781;
  *((int *)&__m256_op0[0]) = 0x00000064;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x0c6a2400;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x0f002040;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x0c6a2400;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x0f002040;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x0000000c;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x0000000c;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0feff00000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0feff00000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000003868686a20;
  *((unsigned long *)&__m256d_op1[2]) = 0x0045b8ae81bce1d8;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000003868686a20;
  *((unsigned long *)&__m256d_op1[0]) = 0x0045b8ae81bce1d8;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x3ff0000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x3ff0000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op1[2]) = 0x3ff1808001020101;
  *((unsigned long *)&__m256d_op1[1]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op1[0]) = 0x3ff1808001020101;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000005;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000005;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000005;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000005;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000005;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000005;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000001;
  *((unsigned long *)&__m256d_op0[2]) = 0xffffffffffffffdc;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000001;
  *((unsigned long *)&__m256d_op0[0]) = 0xffffffffffffffdc;
  *((unsigned long *)&__m256d_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xe0e0e0e0e0e0e0e0;
  *((unsigned long *)&__m256d_op0[2]) = 0xfefefefeffe0e0e0;
  *((unsigned long *)&__m256d_op0[1]) = 0xe0e0e0e0e0e0e0e0;
  *((unsigned long *)&__m256d_op0[0]) = 0xfefefefeffe0e0e0;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000040004000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000040004000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256d_op1[2]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256d_op1[1]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256d_op1[0]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x00000005ffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0x00000007ffffffce;
  *((unsigned long *)&__m256d_op1[1]) = 0x00000005ffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0x00000007ffffffce;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sor_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  return 0;
}