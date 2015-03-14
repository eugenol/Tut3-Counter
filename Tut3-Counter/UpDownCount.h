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

<<<<<<< HEAD
	//overloaded increment and decrement operators.
=======
	//Overloading the increment and decrement operators
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
	UpDownCount operator++();
	UpDownCount operator++(int);
	UpDownCount operator--();
	UpDownCount operator--(int);

<<<<<<< HEAD
	//overload stream extraction operator, to make displaying easier.
=======
	//Stream inserttion operator, makes it easier to display the counter values
>>>>>>> a6076bb2faa283c167b730a0594e2c2b4a3f7033
	friend std::ostream &operator<<(std::ostream &, const UpDownCount &);
};
#endif
