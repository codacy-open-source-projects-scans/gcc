/* { dg-additional-options "-fdiagnostics-text-art-charset=unicode -Wno-stringop-overflow" } */
/* { dg-skip-if "" { powerpc-ibm-aix* } } */

#include <string.h>

void test (void)
{
  char buf[10];
  strcpy (buf, "foo");
  strcat (buf, " bar");
  strcat (buf, " baz!"); /* { dg-warning "stack-based buffer overflow" } */
}

/* { dg-begin-multiline-output "" }

                                      ┌────┬────┬────┐ ┌────┬────┬───────┐
                                      │[0] │[1] │[2] │ │[3] │[4] │  [5]  │
                                      ├────┼────┼────┤ ├────┼────┼───────┤
                                      │' ' │'b' │'a' │ │'z' │'!' │  NUL  │
                                      ├────┴────┴────┴─┴────┴────┴───────┤
                                      │ string literal (type: 'char[6]') │
                                      └──────────────────────────────────┘
                                        │    │    │      │    │      │
                                        │    │    │      │    │      │
                                        v    v    v      v    v      v
  ┌─────┬─────────────────────────────┬────┬────┬────┐ ┌─────────────────┐
  │ [0] │             ...             │[7] │... │[9] │ │                 │
  └─────┴────────┬────┬────┬────┬────┬┼────┼────┴────┘ │                 │
                 │' ' │'b' │'a' │'r' ││NUL │           │after valid range│
  ┌──────────────┴────┴────┴────┴────┴┴────┴─────────┐ │                 │
  │             'buf' (type: 'char[10]')             │ │                 │
  └──────────────────────────────────────────────────┘ └─────────────────┘
  ├────────────────────────┬─────────────────────────┤ ├────────┬────────┤
                           │                                    │
                 ╭─────────┴────────╮                 ╭─────────┴─────────╮
                 │capacity: 10 bytes│                 │overflow of 3 bytes│
                 ╰──────────────────╯                 ╰───────────────────╯

   { dg-end-multiline-output "" { target c } } */

/* { dg-begin-multiline-output "" }

                                  ┌─────┬─────┬─────┐  ┌─────┬─────┬─────┐
                                  │ [0] │ [1] │ [2] │  │ [3] │ [4] │ [5] │
                                  ├─────┼─────┼─────┤  ├─────┼─────┼─────┤
                                  │ ' ' │ 'b' │ 'a' │  │ 'z' │ '!' │ NUL │
                                  ├─────┴─────┴─────┴──┴─────┴─────┴─────┤
                                  │string literal (type: 'const char[6]')│
                                  └──────────────────────────────────────┘
                                     │     │     │        │     │     │
                                     │     │     │        │     │     │
                                     v     v     v        v     v     v
  ┌────┬──────────────────────────┬─────┬─────┬─────┐  ┌─────────────────┐
  │[0] │           ...            │ [7] │ ... │ [9] │  │                 │
  └────┴───────┬────┬────┬───┬───┬┼─────┼─────┴─────┘  │                 │
               │' ' │'b' │'a'│'r'││ NUL │              │after valid range│
  ┌────────────┴────┴────┴───┴───┴┴─────┴───────────┐  │                 │
  │       'char buf [10]' (type: 'char[10]')        │  │                 │
  └─────────────────────────────────────────────────┘  └─────────────────┘
  ├────────────────────────┬────────────────────────┤  ├────────┬────────┤
                           │                                    │
                 ╭─────────┴────────╮                 ╭─────────┴─────────╮
                 │capacity: 10 bytes│                 │overflow of 3 bytes│
                 ╰──────────────────╯                 ╰───────────────────╯

   { dg-end-multiline-output "" { target c++ } } */