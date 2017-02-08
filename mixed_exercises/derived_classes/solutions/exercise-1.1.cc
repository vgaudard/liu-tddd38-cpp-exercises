/*
 * Mixed exercises: Derived classes, exercise 1, step 1.
 */
#include <iostream>
using namespace std;

struct Base 
{
   void id() const { cout << "Base\n"; }
};

struct Derived : public Base
{
   void id() const { cout << "Derived\n"; }
};

int main()
{
   Base b1;
   b1.id();

   Derived d1;
   d1.id();

   Base* pb{ new Base{} };
   pb->id();
   delete pb;

   pb = new Derived{};
   pb->id();  // note!
   delete pb;

   Derived* pd{ new Derived{} };
   pd->id();
   delete pd;

   return 0;
}
