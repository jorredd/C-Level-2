// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 5 - Dynamic Memory
//Header .h

#ifndef  FRACTION
#define FRACTION
#include <string>
using std::istream;
using std::ostream;
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

	friend istream &operator >> (istream &input, Fraction &f);
	friend ostream &operator << (ostream & output, Fraction & f);

	void printFraction();

};


#endif // FRACTION
