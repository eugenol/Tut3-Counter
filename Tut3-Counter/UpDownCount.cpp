#include "UpDownCount.h"


UpDownCount::UpDownCount(int low, int high, int inc, int dec)
{
	count = low; //Counter starts counting from the lowest count
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

	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal) // Check if incrementation will exceed the maximum value
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

	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal) // Cheeck if incrementation will exceed the maximum value
		count += incVal;
	else
		std::cout << "Can not increment the counter" << std::endl;

	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);


	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal) // Cheeck if decrementation will be lower than  the minimum value
		count -= decVal;
	else
		std::cout << "Can not decrement the counter" << std::endl;

	Temp.count = count;

	return Temp;
}
UpDownCount UpDownCount::operator--(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal) // Cheeck if decrementation will be lower than  the minimum value
		count -= decVal;
	else
		std::cout << "Can not decrement the counter" << std::endl;

	return Temp;
}

std::ostream &operator<<(std::ostream &os, const UpDownCount &rhs)
{
	std::cout << rhs.count;
	return os;
}