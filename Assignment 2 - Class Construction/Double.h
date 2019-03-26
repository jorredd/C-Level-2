// Jordan Redd 
// 0433589
// 3/18/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
#ifndef DOUBLE
#define DOUBLE
#include "Integer.h"

class Double
{
private:
	double num;
	
public:
	Double();
	Double(double d); //Assignment 3
	Double(Double *d); //Assignment 3 
	Double(Integer *i); //Assignment 3

	void equals(double d);
	Double add(Double &d);
	Double sub(Double &d);
	Double mul(Double &d);
	Double div(Double &d);

	Double add(double d);
	Double sub(double d);
	Double mul(double d);
	Double div(double d);
	double toDouble();
};

#endif // !DOUBLE