#include "UpDownCount.h"


UpDownCount::UpDownCount(int low, int high, int inc, int dec)
{
	count = low;
	lowVal = low;
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

	if (count + incVal <= highVal)
	{
		count += incVal;
	}
	else
		std::cout << "Can not increment the counter" << std::endl;

	Temp.count = count;
	
	return Temp;
}
UpDownCount UpDownCount::operator++(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	if (count + incVal <= highVal)
	{
		count += incVal;
	}
	else
		std::cout << "Can not increment the counter" << std::endl;

	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);


	if (count - decVal >= lowVal)
	{
		count -= decVal;
	}
	else
		std::cout << "Can not decrement the counter" << std::endl;

	Temp.count = count;

	return Temp;
}
UpDownCount UpDownCount::operator--(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	if (count - decVal >= lowVal)
	{
		count -= decVal;
	}
	else
		std::cout << "Can not decrement the counter" << std::endl;

	return Temp;
}

std::ostream &operator<<(std::ostream &os, const UpDownCount &rhs)
{
	std::cout << rhs.count;
	return os;
}