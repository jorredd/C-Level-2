// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
//Assignment 5 - Operator Overloading
//Header .h
//Description: Included operator overloading. we can now use + , - =, == (bool), !=(bool)
// Now when doing simple operations on two fraction i dont have to call the functions i can just "Fraction tmp("11 11") + Fraction tmp2("22 22")

#ifndef  FRACTION
#define FRACTION
#include <string>

using std::string;

class Fraction
{

private:
	int num;
	int den;


public:
	//constructors
	Fraction();
	Fraction(int num, int den);
	Fraction(string fraction);

	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	Fraction mult(const Fraction &f);
	Fraction div(const Fraction &f);
	int getNum() const;
	int getDen() const;


	Fraction operator + (const Fraction &f);
	Fraction operator - (const Fraction &f);

	Fraction operator * (const Fraction &f);
	Fraction operator / (const Fraction &f);
	Fraction &operator = (const Fraction &f);

	Fraction &operator = (string f);

	bool operator==(const Fraction f);
	bool operator==(string f);
	bool operator!=(const Fraction f);

	void printFraction();
};

#endif // FRACTION
