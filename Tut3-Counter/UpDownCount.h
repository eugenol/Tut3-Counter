#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>

class UpDownCount
{
private:
	int count, lowVal, highVal, incVal, decVal;
public:
	UpDownCount(int low = 0, int hight = 255, int inc = 1, int dec = 1);
	~UpDownCount();

	UpDownCount operator++();
	UpDownCount operator++(int);
	UpDownCount operator--();
	UpDownCount operator--(int);

	friend std::ostream &operator<<(std::ostream &, const UpDownCount &);
};
#endif
