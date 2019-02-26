// Jordan Redd 
// 0433589
// 1/17/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 3 - OverLoaded Constructors
/* Description:
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#include "Double.h"
#include "Integer.h"

//Constructors
Double::Double(){};
Double::Double(double d) : num(d) {};
Double::Double(Double *d) : num(d->toDouble()) {};
Double::Double(Integer *i) : num((double)i->toInt()) {};

void Double::equals(double d)
{
	this->num = d;
}
Double Double::add(Double &d)
{
	double sum = num + d.num;
	Double tmp(sum);
	return tmp;

}
Double Double::sub(Double &d)
{
	double differnece = num - d.num;
	Double tmp(differnece);
	return tmp;
}
Double Double::mul(Double &d)
{
	double product = num * d.num;
	Double tmp(product);
	return tmp;
}
Double Double::div(Double &d)
{
	double quotient = num / d.num;
	Double tmp(quotient);
	return tmp;
}

//Assignment 3
Double Double::add(double d)
{
	double sum = num + d;
	Double tmp(sum);
	return tmp;

}
Double Double::sub(double d)
{
	double differnece = num - d;
	Double tmp(differnece);
	return tmp;
}
Double Double::mul(double d)
{
	double product = num * d;
	Double tmp(product);
	return tmp;
}
Double Double::div(double d)
{
	double quotient = num / d;
	Double tmp(quotient);
	return tmp;
}

double  Double::toDouble()
{
	return this->num;
}
