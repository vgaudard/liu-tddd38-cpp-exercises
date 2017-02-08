#include <iostream>
main ()
{
	bool b = false;
	std::cout << b++ << std::endl;
	std::cout << b++ << std::endl;
	std::cout << b++ << std::endl;
	std::cout << ++b << std::endl;
	std::cout << ++b << std::endl;
	
	double d = .5;
	std::cout << d++ << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d-- << std::endl;
	std::cout << ----d << std::endl;
	
	--d = 0.5;
	std::cout << d;
}
