#include "Integer.h"

using namespace std;

ostream& operator<<(ostream& s, const Integer& i)
{
    return s << i.value;
}

istream& operator>>(istream& s, Integer& i)
{
    return s >> i.value;
}

Integer operator+(const Integer& i1, const Integer& i2)
{
    return Integer(i1.value + i2.value);
}

Integer operator+(const int& i1, const Integer& i2)
{
    return Integer(i1 + i2.value);
}

Integer operator+(const Integer& i1, const int& i2)
{
    return Integer(i1.value + i2);
}

