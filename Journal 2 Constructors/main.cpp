// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 2 - Constructors

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2, f3;
	Fraction constructF(2, 4); //constructor
			 constructF.printFraction();

	cout << "------------------" << endl;

	Fraction stringFraction("3 8"); //string overloaded constructor
			 stringFraction.printFraction();

	cout << "------------------" << endl;

	f1.setFraction(1, 2);
	f2.setFraction(-3, -4);
	f3 = f1.div(f2);

	f3.printFraction();
	return 0;
}