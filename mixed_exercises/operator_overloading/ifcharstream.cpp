#include <iostream>
#include <random>
#include <string>
#include <fstream>

class ifcharstream
{
public:
    ifcharstream(std::string filename)
        : _filename(filename),
        _stream(filename.c_str()),
        rand(0, _stream.gcount())
    {
    }

    char operator[](int useless)
    {
        _stream.seekg(rand());
        return _stream.read(1);
    }

private:
    std::string _filename;
    std::fstream _stream;
    std::uniform_int_distribution<int> rand;
};

