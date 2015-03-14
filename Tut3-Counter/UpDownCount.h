#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>

class UpDownCount
{
private:
	int count, lowVal, highVal, incVal, decVal;
public:
	UpDownCount(int low = 0, int hight = 255, int inc = 1, int dec = 1); //default values set if noa arguments given to constructor.
	~UpDownCount();

	//Overloading the increment and decrement operators
	UpDownCount operator++();
	UpDownCount operator++(int);
	UpDownCount operator--();
	UpDownCount operator--(int);


	//Stream insertion operator, makes it easier to display the counter values
	friend std::ostream &operator<<(std::ostream &, const UpDownCount &);
};
#endif
