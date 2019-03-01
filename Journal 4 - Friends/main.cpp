// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 5 - friends
//main.cpp


#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2, f3, f4, f5, f6;
	Fraction constructF(2, 4); //constructor
	constructF.printFraction();

	cout << "------------------" << endl;

	Fraction stringFraction("3 8"); //string overloaded constructor
	stringFraction.printFraction();

	cout << "------------------" << endl;

	f1.setFraction(1, 2);
	f2.setFraction(-3, -4);
	//Operator Overloading
	f3 = f1 / f2;  // f1.div(f2);
	f4 = f1 + f2; // add operator overload
	f5 = f1 * f2; // multiplication overload

	cin >> f6;//Journal 5
	cout << f6;//Journal 5

	f6.printFraction();
	return 0;
}