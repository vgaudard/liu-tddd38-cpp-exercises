#include "testutils.icc"


int main ()
{
    int* p1 {new int{5}};
    smart_pointer sp1 {p1};
    fun1(sp1);


    return 0;
}

