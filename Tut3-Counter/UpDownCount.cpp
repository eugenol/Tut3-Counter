#include "UpDownCount.h"


UpDownCount::UpDownCount(int low, int high, int inc, int dec)
{
<<<<<<< HEAD
	//Initialize the counter.
	count = lowVal = low;
=======
	count = low; //Counter starts counting from the lowest count
	lowVal = low;
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
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

<<<<<<< HEAD
	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal)
=======
	if (count + incVal <= highVal) // Cheeck if incrementation will exceed the maximum value
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
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

<<<<<<< HEAD
	// If the counter will not exceed the maximum count, increment the counter.
	if (count + incVal <= highVal)
	{
=======
	if (count + incVal <= highVal) // Cheeck if incrementation will exceed the maximum value
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
		count += incVal;
	else
		std::cout << "Can not increment the counter" << std::endl;

	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);

<<<<<<< HEAD
	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal)
	{
=======

	if (count - decVal >= lowVal) // Cheeck if decrementation will be lower than  the minimum value
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
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

<<<<<<< HEAD
	// If the counter will be lower than the minimum count, decrement the counter.
	if (count - decVal >= lowVal)
	{
=======
	if (count - decVal >= lowVal) // Cheeck if decrementation will be lower than  the minimum value
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
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