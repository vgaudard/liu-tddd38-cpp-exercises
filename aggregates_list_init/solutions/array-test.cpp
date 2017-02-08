/*
 * array-test.cc    Exercise Aggregates and list initialization
 */
#include <iostream>
#include <initializer_list>
using namespace std;

// 3) as function argument
void fun1(std::initializer_list<int> il)
{
   for (auto x : il)
      cout << x << ' ';
   cout << '\n';
}

// 4) in a return statement
std::initializer_list<int> fun2()
{
   return { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
}

struct S
{
   int a5[3]{ 1, 2, 3 };  // 5

   S() : a6{ 0, 1, 2 } {}  // 6
   int a6[3];
};

// How to pass array dimension to function
template<typename T, int N>
void print_array(T (&a)[N])  // a is reference to array with type int[N]
{
   for (auto x : a)
      cout << x << ' ';
   cout << '\n';
}

int main()
{
   cout << "a) array aggregates.\n";

   cout <<  "\n1) initializer in an array definition:\n   ";
   int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   print_array(a);

   cout <<  "\n2) initializer in a new[] expression:\n   ";
   int* p = new int[5]{ 1, 2, 3 };

   for (auto it = p; it != p + 5; ++it)
      cout << *it << ' ';
   cout << '\n';
  
   cout << "\n3) as function argument - not if parameter is array.\n";

   cout << "\n4) in a return statement - not if destination is array.\n   ";

   cout << "\n5) initializer for non-static array data member\n   ";
   S s;
   print_array(s.a5);

   cout << "\n6) array member initializer:\n   ";
   print_array(s.a6);

   cout << "\n7) on the right-hand side of an assignment - not if left-hand is array.\n";
 
   cout << "\n8) argument to a constructor invocation - not if parameter is array.\n\n";

   return 0;
}
