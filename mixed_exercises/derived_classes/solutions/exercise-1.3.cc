/*
 * Mixed exercises: Derived classes, exercise 1, step 3.
 */
#include <iostream>
#include <typeinfo>
using namespace std;

struct Base 
{
   virtual ~Base() noexcept = default;
   virtual void id() { cout << typeid(*this).name() << endl; }
};

struct Derived : public Base { };

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
