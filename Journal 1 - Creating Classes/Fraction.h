// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 1 - Creating Classes
#ifndef  FRACTION
#define FRACTION


class Fraction
{
	
private:
	int num;
	int den;
	


public:
	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	Fraction mult(const Fraction &f);
	Fraction div(const Fraction &f);
	void printFraction();
};


#endif // FRACTION