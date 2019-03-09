// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 7 - Static Members
//main.cpp


#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction *ptr = new Fraction();
	Fraction *f1 = new Fraction(1, 2);
	Fraction *f2 = new Fraction(3, 4);
	Fraction *f3 = new Fraction(2,6);

	cout << Fraction::value << endl;

	delete f1;

	ptr->printCount();

	return 0;
}