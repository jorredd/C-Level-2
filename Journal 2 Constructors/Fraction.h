// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 2 - Constructors
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
	void printFraction();

};


#endif // FRACTION