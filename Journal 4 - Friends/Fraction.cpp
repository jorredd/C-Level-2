// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 4 - friends
//fraction.cpp

#include <iostream>
#include "Fraction.h"

using namespace std;


Fraction::Fraction() //default constructor
{
	this->setFraction(1, 1);
}Fraction::Fraction(int num, int den) //constructor
{
	this->setFraction(num, den);
}
Fraction::Fraction(string fraction) //string constructor
{
	int num = (int)fraction[0] - '0'; //converts 1st number to int value then subtracts by 48 to get actual value
	int den = (int)fraction[2] - '0';//converts 2nd number to int value then subtracts by 48 to get actual value

	this->setFraction(num, den);
}
void Fraction::setFraction(int n, int d)
{
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) + (f.num * this->den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) - (f.num * this->den);
	tmp.den = f.den * den;
	return tmp;
}
Fraction Fraction::mult(const Fraction &f)
{
	Fraction tmp;
	tmp.num = this->num * f.num;
	tmp.den = f.den * this->den;
	return tmp;
}
Fraction Fraction::div(const Fraction &f)
{
	Fraction tmp;
	tmp.num = this->num * f.den;
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
	cout << this->num << "/" << this->den << endl;
}
int Fraction::getNum() const
{
	return this->num;
}
int Fraction::getDen() const
{
	return this->den;
}
Fraction Fraction::operator+(const Fraction &f)
{
	return this->add(f);
}


Fraction Fraction::operator-(const Fraction &f)
{
	return this->sub(f);
}
Fraction Fraction::operator*(const Fraction &f)
{
	return this->mult(f);
}
Fraction Fraction::operator/(const Fraction &f)
{
	return this->div(f);
}
Fraction &Fraction::operator=(const Fraction &f)
{
	this->setFraction(f.num, f.den);
	return *this;
}
//overloads the istream and ostream to be used with my class
istream &operator >> (istream & input, Fraction & f)
{
	cout << "Enter a numerator" << endl;
	input >> f.num;
	cout << "Enter a denominator" << endl;
	input >> f.den;
	return input;
}
ostream &operator << (ostream & output, Fraction & f)
{
	output << "This is your Fraction: " << f.getNum() << "/" << f.getDen() << endl;

	return output;
}
