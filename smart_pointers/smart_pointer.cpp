#include "smart_pointer.h"

using namespace IDA_Smart_Pointer;

smart_pointer::smart_pointer()
    : _ptr(nullptr)
{
}

smart_pointer::smart_pointer(int* p)
    : _ptr(p)
{
}

smart_pointer::smart_pointer(const smart_pointer& other)
{
    copy(other);
}

smart_pointer::smart_pointer(smart_pointer&& other) noexcept
{
    _ptr = other._ptr;
}

smart_pointer::~smart_pointer()
{
    if (_ptr != nullptr)
        delete _ptr;
}

smart_pointer& smart_pointer::operator=(const smart_pointer& rhs) &
{
    copy(rhs);
}

smart_pointer& smart_pointer::operator=(smart_pointer&& rhs) & noexcept
{
    _ptr = rhs._ptr;
}


int& smart_pointer::operator*() const
{
    return *_ptr;
}

int* smart_pointer::operator->() const
{
    return _ptr;
}

void smart_pointer::copy(const smart_pointer& p)
{
    if (_ptr != p._ptr && _ptr != nullptr)
        delete _ptr;
    _ptr = new int;
    *_ptr = *p._ptr;
}

smart_pointer::operator bool() const
{
    return _ptr == nullptr;
}

bool smart_pointer::operator==(smart_pointer const & sp2) const
{
    return _ptr == sp2._ptr;
}

bool smart_pointer::operator==(int const * p2) const
{
    return _ptr == p2;
}

bool smart_pointer::operator!=(smart_pointer const & sp2) const
{
    return _ptr != sp2._ptr;
}

bool smart_pointer::operator!=(int const * p2) const
{
    return _ptr != p2;
}


