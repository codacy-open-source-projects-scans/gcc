// PR c++/67319
// { dg-do compile { target c++20 } }
// { dg-additional-options "-fconcepts" }

template <typename T>
concept Any =
  requires (T t) { +t; };

struct my_struct
{
  template <Any... Args>
  auto sample(Args... args) -> void;
};

int main()
{
  my_struct{}.sample();
  my_struct{}.sample(0);
  my_struct{}.sample(0, 'a');
  my_struct{}.sample(nullptr); // { dg-error "" }
}

