/*
 * array-test.cc    Exercise Aggregates and list initialization
 */
#include <iostream>
#include <string>
using namespace std;

struct Person
{
   std::string name;
   unsigned    age;
   float       length;
};

void fun1(Person p)  // 3
{
   cout << p.name << ", " << p.age << ", " << p.length << endl;
}

Person fun2()
{
   return { "Bjarne Stroustrup", 62, 1.79 };  // 4
}

struct S
{
   Person p1{ "Bjarne Stroustrup", 62, 1.79 };   // 5

   S() : p2{ "Bjarne Stroustrup", 62, 1.79 } {}  // 6
   Person p2;

   S(const Person& p) : p3(p) {}
   Person p3;
};

void print_person(const Person& p)
{
   cout << p.name << ", " << p.age << ", " << p.length << endl;
}

int main()
{
   cout << "b) struct aggregates.\n";

   cout << "\n1) initializer in a struct variable definition:\n   ";
   Person p1{ "Bjarne Stroustrup", 62, 1.79 };
   print_person(p1);

   cout << "\n2) struct initializer in a new expression:\n   ";
   Person* pp = new Person{ "Bjarne Stroustrup", 62, 1.79 };
   print_person(*pp);

   cout << "\n3) as function argument, parameter is a struct:\n   ";
   fun1({ "Bjarne Stroustrup", 62, 1.79 });

   cout << "\n4) in a return statement, destination is a struct:\n   ";
   Person p2 = fun2();
   print_person(p2);

   cout << "\n5) initializer for non-static struct data member:\n   ";
   S s1;
   print_person(s1.p1);

   cout << "\n6) in a struct member initializer:\n   ";
   print_person(s1.p2);

   cout << "\n7) right-hand side of an assignment to struct:\n   ";
   p1 = { "Bjarne Stroustrup", 62, 1.79 };
   print_person(p1);

   cout << "\n8) argument to a constructor invocation (struct parameter):\n   ";
   S s2({ "Bjarne Stroustrup", 62, 1.79 });
   print_person(s2.p3);
   cout << '\n';

   return 0;
}
