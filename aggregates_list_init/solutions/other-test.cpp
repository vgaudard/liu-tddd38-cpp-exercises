/*
 * other-test.cc    Exercise Aggregates and list initialization
 */
#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;

void fun1(std::initializer_list<int> il)  // 3
{
   for (auto x : il)
      cout << x << ' ';
   cout << '\n';
}

std::initializer_list<int> fun2()
{
   return { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  // 4
}

struct S
{
   S(initializer_list<int> il)  // 8
   {
      for (auto x : il)
	 cout <<  x << ' ';
      cout << '\n';
   }
};


int main()
{
   cout << "c) situations where std::initializer_list is involved, instead of array.\n";

   cout << "\n3) as function argument, parameter is std::initializer_list:\n   ";
   fun1({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 });

   cout << "\n4) in a return statement, destination is std::initializer_list:\n   ";
   auto il = fun2();
   fun1(il);  // check result

   cout << "\n8) argument to a constructor invocation, parameter is std::initializer_list:\n   ";
   S s({ 0, 1, 2, 3, 4, 5 });

   return 0;
}
