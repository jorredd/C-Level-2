// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 6 - Dynamic Memory
//main.cpp


#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2, f3;
	cin >> f1 >> f2;
	f3 = f1 + f2; // the two tmp Fractions used in the .add() method will have their data deleted
	cout << endl;
	cout << f1 << endl << f2 << endl << f3 << endl;
	//the three objects will be deleted 
	return 0;
}