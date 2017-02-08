 
#include <string>

using namespace std;

main(){}

/*
char c;   -> def
string s; -> def
auto count {1}; -> def
const int MAX {4711}; -> def
extern double d; -> decl
const char* msg {"Hello !"}; -> def
const char* Direction[] {"up", "down", "left", "right"}; -> def
struct Time { int h,m,s; } -> def
int sec(Time* p) { return p->s; } -> def
double sqrt(double); -> decl
template<typename T> T abs (T a) { return (a < 0) ? -a : a; } -> def
typedef std::vector<double> data; -> def
using char_ptr = char*; -> def
struct Node; -> decl
enum Season { Sp, Su, Au, W }; -> def
namespace N { int i; } -> def
* */

extern char c;
extern string s;
extern  int count;
extern const int MAX;
double d;
extern const char* msg;
extern const char* Direction[];
struct Time;
int sec(Time* p);
double sqrt(double x) {return x;}
template<typename T> T abs (T a);
class data : public std::vector<double> {};
using char_ptr = char*; // impossibru
struct Node { struct Node* node; };
enum Season;
namespace N;
