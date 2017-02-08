/*
 * Basic language constructs, exercise 1.
 */
#include <iostream>
#include <vector>
using namespace std;
auto count{ 1 };                                                 // definition
char c;                                                          // definition
const char* direction[]{ "up", "down", "left", "right" };        // definition
const char* msg{ "Hello!" };                                     // definition
const int MAX{ 4711 };                                           // definition
double sqrt(double);                                             // declaration
enum season { spring, summer, autumn, winter };                  // definition
extern double d;                                                 // declaration
int sec(Time* p) { return p->s; }                                // definition
namespace N { int i; }                                           // definition
string s;                                                        // definition
struct Node;                                                     // declaration
struct Time { int h, m, s; };                                    // definition
template<typename T> T abs(T a) { return (a < 0) ? -a : a; }     // definition
typedef std::vector<double> data;                                // definition
using char_ptr = char*;                                          // definition

int main()
{
   return 0;
}
