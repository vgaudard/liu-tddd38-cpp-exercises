#include <iostream>
#include <typeinfo>
#include "demangle.h"

using namespace std;


struct Base
{
    //virtual void id() const { cout << "base" << endl; }
    virtual void id() const { cout << typeid(*this).name() << endl; }
    //virtual void id() const { cout << demangle_name(typeid(*this)) << endl; }
    virtual ~Base() {};
};

struct Derived : public Base
{
    //virtual void id() const { cout << "derived" << endl; }
};

int main(int argc, char *argv[])
{
    Base a = Base();
    Base b = Derived();
    Derived c = Derived();
    Base* d = new Base();
    Base* e = new Derived();
    Derived* f = new Derived();
    a.id();
    b.id();
    c.id();
    d->id();
    e->id();
    f->id();
    return 0;
}

