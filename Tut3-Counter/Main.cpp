#include <iostream>
#include "UpDownCount.h"

int main(int argc, char* argv[])
{
	UpDownCount a, b(120, 250, 5, 2);

	std::cout << a << std::endl << ++a << std::endl << a++ << std::endl << a << std::endl;
	std::cout << b << std::endl << ++b << std::endl << b++ << std::endl << b << std::endl;

	return 0;
}