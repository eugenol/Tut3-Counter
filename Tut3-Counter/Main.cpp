#include <iostream>
#include "UpDownCount.h"

using namespace std;

int main(int argc, char* argv[])
{
	//Test cases
	UpDownCount a, b(120, 250, 5, 2), c(0, 1), d(-120, 120, 2, 2);

	cout << a << endl;
	cout << ++a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a-- << endl;
	cout << a << endl;
	cout << endl;
	
	cout << b << endl;
	cout << ++b << endl;
	cout << b++ << endl;
	cout << b << endl;
	cout << --b << endl;
	cout << b-- << endl;
	cout << b << endl;
	cout << endl;

	cout << c << endl;
	cout << ++c << endl;
	cout << c++ << endl;
	cout << c << endl;
	cout << --c << endl;
	cout << c-- << endl;
	cout << c << endl;
	cout << endl;

	cout << d << endl;
	cout << ++d << endl;
	cout << d++ << endl;
	cout << d << endl;
	cout << --d << endl;
	cout << d-- << endl;
	cout << d << endl;
	cout << endl;

	return 0;
}