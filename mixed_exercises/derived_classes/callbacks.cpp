#include <iostream>

using namespace std;

struct callback
{
    virtual void operator()() const = 0;
};

template <void (*fp)()>
struct appelerretour : public callback
{
    virtual void operator()() const
    {
        fp();
    }
};

void hello()
{
    cout << "Hello" << endl;
}

void greet(callback const& msg)
{
    msg();
}

template <typename T, void (T::*fp)()>
struct MemberCallback : public callback
{
    T *_obj;
    explicit MemberCallback (T& obj) : _obj(&obj) {}
    virtual void operator()() const
    {
        (_obj->*fp)();
    }
};

struct Trololo
{
    void trilili() { cout << "tralala" << endl; }
};

int main(int argc, char *argv[])
{
    appelerretour<hello> pouet;
    greet(pouet);
    Trololo trululu;
    MemberCallback<Trololo, &Trololo::trilili> m(trululu);
    greet(m);
    return 0;
}

