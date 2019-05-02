// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 7 - FileI/0
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
	int *num;
	int *den;


public:
	//constructors
	Fraction();
	Fraction(int num, int den);
	Fraction(string fraction);
	Fraction(const Fraction &f);
	~Fraction();
	void create();
	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	Fraction mult(const Fraction &f);
	Fraction div(const Fraction &f);
	string getFraction();
	int getNum() const;
	int getDen() const;


	Fraction operator + (const Fraction &f);
	Fraction operator - (const Fraction &f);

	Fraction operator * (const Fraction &f);
	Fraction operator / (const Fraction &f);
	Fraction &operator = (const Fraction &f);

	friend istream &operator >> (istream &input, Fraction &f);
	friend ostream &operator << (ostream & output, Fraction & f);

	static int value;
	static void count();
	static void printCount();

	void printFraction();

};


#endif // FRACTION
