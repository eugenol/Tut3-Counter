#include <iostream>
#include <string>
#include "UpDownCount.h"

using namespace std;

void display(string name, UpDownCount &temp);

int main(int argc, char* argv[])
{
	//Run test cases.
	UpDownCount a, b(120, 250, 5, 2), c(15, 20, 5, 10), d(-100, 100, 50, 50), e(-50, 50, 100, 70);

	display("a",a);
	display("b", b);
	display("c", c);
	display("d", d);
	display("e", e);

	return 0;
}

void display(string name, UpDownCount &temp)
{
	cout << name + ": " << temp << endl;
	cout << "++" + name + ": " << ++temp << endl;
	cout << name + ": " << temp << endl;
	cout << name + "++: " << temp++ << endl;
	cout << name + ": " << temp << endl;
	cout << "--" + name + ": " << --temp << endl;
	cout << name + ": " << temp << endl;
	cout << name + "--: " << temp-- << endl;
	cout << name + ": " << temp << endl << endl;
}