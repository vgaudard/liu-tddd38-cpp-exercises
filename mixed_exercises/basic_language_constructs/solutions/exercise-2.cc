/*
 * Basic language constructs, exercise 2.
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// To make Time available for function sec below:

struct Time { int h, m, s; };

// The following must be declaread at global scope:

int sec(Time* p) { return p->s; }

template<typename T> T abs(T a) { return (a < 0) ? -a : a; }

namespace N { int i; }

int main()
{
   char   c;
   string s;
   int    count{ 1 };
   const  int MAX{ 4711 };
   extern double d;
   const char*  msg{ "Hello!" };
   const char*  Direction[]{ "up", "down", "left", "right" };

   double sqrt(double);
   typedef vector<double> data;
   struct Node;
   enum Season { spring, summer, autumn, winter };

   // Must have the definition to take sizeof:
   struct Node { int data; Node* next; };

   cout << sizeof c << '\n';
   cout << sizeof s << '\n';
   cout << sizeof count << '\n';
   cout << sizeof MAX << '\n';
   cout << sizeof d << '\n';
   cout << sizeof msg << '\n';
   cout << sizeof Direction << '\n';

   cout << sizeof(Time) << '\n';
   cout << sizeof(data) << '\n';
   cout << sizeof(Node) << '\n';
   cout << sizeof(Season) << '\n';

   // Can't take sizeof functions (sec, abs) and namespaces (N).

   return 0;
}
