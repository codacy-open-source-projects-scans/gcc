// Core Issue #1331 (const mismatch with defaulted copy constructor)
// { dg-do compile { target c++11 } }

// If T2 (what would be the implicit declaration) has a parameter of
// type const C&, the corresponding parameter of T1 may be of type C&.

struct S
{
  S& operator=(S &) = default;
};

struct T
{
  T& operator=(volatile T &) = default; // { dg-error "defaulted" "" { target c++17_down } }
					// { dg-warning "implicitly deleted" "" { target c++20 } .-1 }
};

struct U
{
  U& operator=(const volatile U &) = default; // { dg-error "defaulted" "" { target c++17_down } }
					      // { dg-warning "implicitly deleted" "" { target c++20 } .-1 }
};

struct V
{
  V& operator=(const V &) = default;
};
