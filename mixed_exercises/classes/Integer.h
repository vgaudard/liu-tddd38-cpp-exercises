#include <iostream>


class Integer
{
public:
    explicit Integer(int i) : value(i) {}
    friend std::ostream& operator<<(std::ostream& s, const Integer& i);
    friend std::istream& operator>>(std::istream& s, Integer& i);
    friend Integer operator+(const Integer& i1, const Integer& i2);
    friend Integer operator+(const int& i1, const Integer& i2);
    friend Integer operator+(const Integer& i1, const int& i2);
    // ...

private:
    int value;
};
