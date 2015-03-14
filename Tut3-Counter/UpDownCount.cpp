#include "UpDownCount.h"


UpDownCount::UpDownCount(int low, int high, int inc, int dec)
{
	//Initialize the counter.
	count = lowVal = low;
	highVal = high;
	incVal = inc;
	decVal = dec;
}


UpDownCount::~UpDownCount()
{
}

UpDownCount UpDownCount::operator++()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);

	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal)
	{
		count += incVal;
	}

	Temp.count = count;
	
	return Temp;
}
UpDownCount UpDownCount::operator++(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal)
	{
		count += incVal;
	}

	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);

	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal)
	{
		count -= decVal;
	}

	Temp.count = count;

	return Temp;
}
UpDownCount UpDownCount::operator--(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal)
	{
		count -= decVal;
	}

	return Temp;
}

std::ostream &operator<<(std::ostream &os, const UpDownCount &rhs)
{
	std::cout << rhs.count;
	return os;
}