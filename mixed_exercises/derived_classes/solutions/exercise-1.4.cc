/*
 * Mixed exercises: Inheritance, exercise 1, step 4.
 */
#include "demangle.h"
#include <iostream>
#include <typeinfo>
using namespace std;

struct base 
{
   virtual ~base() noexcept = default;
   void id() { cout << demangle_name(typeid(*this)) << endl; }
};

struct derived_1 : public base { };

struct derived_2 : public base { };

int main()
{
   base* pb{ new base() };
   pb->id();

   delete pb;
   pb = new derived_1();
   pb->id();

   delete pb;
   pb = new derived_2();
   pb->id();

   derived_2* pd2 = new derived_2;
   pd2->id();
   delete pd2;

   return 0;
}
