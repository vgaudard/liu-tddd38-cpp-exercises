/*
 * Basic language constructs, exercise 15.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   unsigned u = 0;
   bool     b = false;
   double   d = 0.0;

   cout << endl;
   cout << "u = "    << u   << endl;
   cout << "u-- == " << u-- << endl;
   cout << "u = "    << u   << endl;
   cout << "++u == " << ++u << endl;
   cout << "u = "    << u   << endl;

   cout << endl << boolalpha;
   cout << "b = "    << b   << endl;
   cout << "b++ == " << b++ << endl; 
   cout << "b = "    << b   << endl;
   cout << "b++ == " << b++ << endl;
   cout << "b = "    << b   << endl;

   b = false;
   cout << endl;
   cout << "b = "    << b   << endl;
   cout << "++b == " << ++b << endl;
   cout << "b = "    << b   << endl;

   /*  b--;  Illegal! */
   /*  --b;  Illegal! */

   cout << fixed << setprecision(1) << endl;
   cout << "d = "    << d   << endl;
   cout << "d++ == " << d++ << endl;
   cout << "d = "    << d   << endl;
   cout << endl;

   return 0;
}
