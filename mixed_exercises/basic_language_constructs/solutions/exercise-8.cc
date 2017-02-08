/*
 * Basic language constructs, exercise 8.
 */
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
   char str1[100]{ "String" };
   cout << sizeof str1 << '\n';
   cout << std::strlen(str1) << "\n\n";

   char str2[]{ "String" };
   cout << sizeof str2 << '\n';
   cout << std::strlen(str2) << "\n\n";

   const char* str3{ "String" };
   cout << sizeof str3 << "\n\n";

   string str4{ "String" };
   cout << sizeof str4 << '\n';
   cout << str4.size() << "\n\n";

   return 0;
}
