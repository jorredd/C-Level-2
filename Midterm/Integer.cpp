// Jordan Redd 
// 0433589
// 1/17/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/* Description:
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#include "Integer.h"

//Constructors
Integer::Integer() {};
Integer::Integer(int d) : num(d) {}
Integer::Integer(Integer *d) : num(d->toInt()) {}

void Integer::equals(int d)
{
	this->num = d;
}
Integer Integer::add(Integer &d)
{
	int sum = num + d.num;
	Integer tmp(sum);
	return tmp;

}
Integer Integer::sub(Integer &d)
{
	int differnece = num - d.num;
	Integer tmp(differnece);
	return tmp;
}
Integer Integer::mul(Integer &d)
{
	int product = num * d.num;
	Integer tmp(product);
	return tmp;
}
Integer Integer::div(Integer &d)
{
	int quotient = num / d.num;
	Integer tmp(quotient);
	return tmp;
}

//Assignment 3
Integer Integer::add(int d)
{
	int sum = num + d;
	Integer tmp(sum);
	return tmp;

}
Integer Integer::sub(int d)
{
	int differnece = num - d;
	Integer tmp(differnece);
	return tmp;
}
Integer Integer::mul(int d)
{
	int product = num * d;
	Integer tmp(product);
	return tmp;
}
Integer Integer::div(int d)
{
	int quotient = num / d;
	Integer tmp(quotient);
	return tmp;
}


int  Integer::toInt()
{
	return this->num;
}

