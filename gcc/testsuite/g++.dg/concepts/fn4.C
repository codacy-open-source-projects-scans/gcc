// { dg-do compile { target c++17 } }
// { dg-options "-fconcepts" }

template<typename T>
  concept C = __is_class(T);

template<typename T>
  concept D = C<T> and __is_empty(T);

struct S1 { } s1;
struct S2 { int n; } s2;

template<C T> void f1(T x) { }
template<D T> void f1(T x) { }

int main() {
  f1(0); // { dg-error "matching" }
}
