/*
 * Basic language constructs, exercise 3.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s3[]{ "foo", "fie", "fum" };

   char* pc{ new char('A') };
   int a[10]{ 1 };              // remaining elements will be zero initialized
   int (&ar)[10]{ a };
   std::string (*pas)[3]{ &s3 };
   char** ppc{ &pc };
   const int  ci{ 4711 };
   const int* pci{ &ci };
   int* const cpi{ a };

   cout << *pc   << '\n';
   for (auto x : a)
      cout << x << ' '; 
   cout << '\n';
   cout << ar[5] << '\n';
   cout << (*pas)[1] << '\n';
   cout << **ppc << '\n';
   cout << *pci  << '\n';
   cout << *cpi  << '\n';

   return 0;
}
