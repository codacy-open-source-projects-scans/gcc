/* { dg-do run { target { riscv_vector } } } */
/* { dg-additional-options "--param riscv-autovec-preference=scalable -fno-vect-cost-model" } */

#include "cond_unary-4.c"

#define N 99

#define TEST_LOOP(TYPE, OP)					\
  {								\
    TYPE r[N], a[N], pred[N];					\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i) * (i % 3 == 0 ? 1 : -1);	\
	pred[i] = (i % 7 < 4);					\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE##_##OP (r, a, pred, N);				\
    for (int i = 0; i < N; ++i)					\
      if (r[i] != (pred[i] ? OP (a[i]) : 0))			\
	__builtin_abort ();					\
  }

int main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}