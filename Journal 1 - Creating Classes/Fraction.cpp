// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 1 - Creating Classes
#include <iostream>
#include "Fraction.h"

using namespace std;



void Fraction::setFraction(int n, int d)
{
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) + (f.num * den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) - (f.num * den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::mult(const Fraction &f)
{
	Fraction tmp;
	tmp.num = num * f.num;
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::div(const Fraction &f)
{
	Fraction tmp;
	tmp.num = num * f.den;
	tmp.den = f.num * den;
	if (tmp.den < 0)
	{
		tmp.den *= -1;
		tmp.num *= -1;
	}

	return tmp;
}
void Fraction::printFraction()
{
	cout << num << "/" << den << endl;
}