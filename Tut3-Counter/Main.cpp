#include <iostream>
#include "UpDownCount.h"

int main(int argc, char* argv[])
{
	UpDownCount a, b(120, 250, 5, 2), c(0, 1);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b++ << std::endl;
	std::cout << b << std::endl;

	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;

	return 0;
}