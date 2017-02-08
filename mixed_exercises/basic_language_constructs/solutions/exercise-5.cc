/*
 * Basic language constructs, exercise 5.
 */
#include <iostream>
using namespace std;

// The following three declarations declares the same function:

int a(int i);       // Parameter name declared
int a(int);         // Parameter name omitted
int a(int (i));     // Redundant parantesis around parameter name (identifier)

// As do these four:

int a(int (*f)());  // a takes function with no parameter returning int
int a(int (*)());   // Parameter name omitted
int a(int f());     // Parameter f is implicitly a function pointer
int a(int ());      // Parameter name omitted

int foo();

int main()
{
   cout << a(2) << endl;

   cout << a(foo) << endl;

   return 0;
}

int a(int i)
{
   return i * 2;
}

int a(int f())
{
   return f();
}

int foo()
{
   return 11147;
}

