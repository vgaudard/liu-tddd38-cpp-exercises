#include <iostream>
#include <initializer_list>
#include <string>

using namespace std;

class Foo
{
public:
	Foo() : a6{1,2,3}
	{}
	
	Foo(initializer_list<int> poniesareawesome)
	{
		int i = 0;
		for (auto pony : poniesareawesome)
		{
			a8[i++] = pony;
		}
	}
	
	int a5[3] {1,2,3};
	int a6[3];
	int a8[3];
};

initializer_list<int> useless(initializer_list<int> a3)
{
	for (auto pouet : a3)
	{
		cout << pouet << endl;
	}
	
	return {1,2,3};
}

struct yolo
{
	int x;
	string s;
};

yolo useless(yolo b3)
{
	cout << b3.s << endl;
	
	return {1, "yulu"};
}

class Yooloo
{
public:
	Yooloo() : b6{1,"2,3"}
	{}
	
	Yooloo(yolo poniesareawesome) : b8(poniesareawesome)
	{}
	
	yolo b5 {1,"yolo"};
	yolo b6;
	yolo b8;
	
};


int main()
{
    int a1[]  {1,2,3};
    int *a2 = new int[3]{1,2,3};
    auto a4 = useless({1,2,3});
    Foo foo;
    int a7[3];
    //a7 = {4,5,6}; // Impossibru
    a7[0] = 4;
    a7[1] = 5;
    a7[2] = 6;
    
    yolo b1 {1, "YOLOOOO!"};
    yolo* b2 = new yolo{42, "yodel"};
    yolo b4 = useless({1, "youhou"});
    yolo b7;
    b7 = {1, "yolo"};

    return 0;
}

