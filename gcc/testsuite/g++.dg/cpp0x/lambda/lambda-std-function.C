// Test using std::function wrapper.
// { dg-do run { target c++11 } }
// { dg-skip-if "requires hosted libstdc++ for functional function" { ! hostedlib } }

#include <functional>

typedef std::function<int()> FN;

template<typename T>
FN f(T fn)
{
  return [fn]{return fn(2);};
}

int main()
{
  auto fn = f([](int i){return i*21;});

  if (fn() != 42)
    return 1;
  return 0;
}
