/* { dg-do compile } */
/* { dg-additional-options "-O -w" } */

int
nr (int xe)
{
  int oo, wo = 0;

  for (oo = 0; oo < 4; ++oo)
    {
      int qq;

      for (qq = 0; qq < 2; ++qq)
        {
          wo += 0x80000000;
          xe += wo;
        }
    }
  return xe;
}

/* { dg-final { scan-tree-dump "Unknown def-use cycle pattern" "vect" { target vect_int } } } */
/* { dg-final { scan-tree-dump-not "OUTER LOOP VECTORIZED" "vect" } } */
