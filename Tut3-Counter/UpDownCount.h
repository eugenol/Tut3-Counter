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

	//overloaded increment and decrement operators.
	UpDownCount operator++();
	UpDownCount operator++(int);
	UpDownCount operator--();
	UpDownCount operator--(int);

	//overload stream extraction operator, to make displaying easier.
	friend std::ostream &operator<<(std::ostream &, const UpDownCount &);
};
#endif
