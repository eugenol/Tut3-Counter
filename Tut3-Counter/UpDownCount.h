#ifndef COUNTER_H
#define COUNTER_H

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
};
#endif
