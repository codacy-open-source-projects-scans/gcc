// { dg-do assemble  }
// { dg-options "-Wall -Wno-deprecated" }
// { dg-skip-if "requires hosted libstdc++ for backward/hash_set" { ! hostedlib } }
// Gives spurious warnings when compiled with -Wall
// EGCS 06/08/98 i686-pc-linux-gnulibc1
// Message-Id: <199806081358.PAA02505@achibm5.chemie.uni-karlsruhe.de>
// From: Klaus-Georg Adams <Klaus-Georg.Adams@chemie.uni-karlsruhe.de>


#include <backward/hash_set>
__gnu_cxx::hash_set<int> foo;

