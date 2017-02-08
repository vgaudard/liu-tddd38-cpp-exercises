#include <iostream>
#include <stdexcept>
#include <cstdlib>

using namespace std;

class useless_exception : public logic_error
{
public:
    useless_exception() : logic_error("I say wattouat!") {}
};

void recursive(int n)
{
    if (n == 0)
        throw useless_exception();
    cout << "Allez, plus que " << n << endl;
    return recursive(n-1);
}

int main (int argc, char *argv[])
{
    try
    {
        recursive(atoi(argv[1]));
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}


