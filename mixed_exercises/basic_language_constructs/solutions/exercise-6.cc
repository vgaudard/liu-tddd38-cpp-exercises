/*
 * Basic language constructs, exercise 6.
 */
#include <iostream>
using namespace std;

using x = int(&)(int, int);  // x is reference to function taking two ints, returning int

int fun(int, int);

int main()
{
   x y{ fun };

   cout << y(1, 2) << '\n';

   return 0;
}

int fun(int i, int j)
{
   return i + j;
}
