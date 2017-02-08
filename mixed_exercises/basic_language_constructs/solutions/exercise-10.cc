/*
 * Basic language constructs, exercise 10.
 */
#include <iostream>
using namespace std;

// Function declaration for the specifies function
void f(char*, int&);

// Alias declarations
using PF = void(*)(char*, int&);  // pointer to a function like f above
using F1 = void(PF);              // function taking such a function pointer
using F2 = PF();                  // function returning such a function pointer

// Corresponding typedefs:
// typedef void(*PF)(char*, int&);
// typedef void F1(PF);
// typedef PF F2();

void g(PF);
PF h();

int main()
{
   int i = 4711;
   char s[]{ "C++" };

   PF fp{ f };
   fp(s, i);

   g(f);

   h()(s, i);

   return 0;
}

void f(char* s, int& r)
{
   cout << s << ", " << r << '\n';
}

void g(PF f)
{
   int i = 11147;
   char s[]{ "C" };
   f(s, i);
}

PF h()
{
   return f;
}
