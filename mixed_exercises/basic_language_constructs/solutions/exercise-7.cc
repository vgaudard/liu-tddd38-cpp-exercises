/*
 * Basic language constructs, exercise 7.
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
   char msg[]{ "Hello world!" };
   

   cout << sizeof msg << " SI \n";
   cout << sizeof (int*) << " SI \n";

   return 0;
}
