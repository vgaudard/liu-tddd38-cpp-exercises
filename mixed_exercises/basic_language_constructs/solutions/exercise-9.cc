/*
 * Basic language constructs, exercise 9.
 */
#include <iostream>
using namespace std;

int  a, b, c, d, x, i;
int* p;

int f(int, int);

int main()
{
   a = (((b+(c*d))<<2)&8);
   a&&(077!=3);
   (a==b) || ((a==c) && (c<5));
   c = (x!=0);
   (0<=i)<7;
   (f(1,2))+3;
   a = (((-1)+ (+(b--))) -5);
   a = (b==(c++));
   a = (b = (c = 0));

   ((a[4])[2]) *= ((*b)? (c): ((*d)*2));
   (a-b), (c = d);
   *(p++);
   *(--p);
   ++(a--);      // Illegal: operand for operator ++ must be an lvalue
//   (int*)(p->m);
//   *(p.m);
//   *(a[i]);

   return 0;
}
