#include "UpDownCount.h"


UpDownCount::UpDownCount(int low = 0, int high = 255, int inc = 1, int dec = 1)
{
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

	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);


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

	if (count - decVal >= lowVal)
	{
		count -= decVal;
	}

	return Temp;
}