// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Assignment 5 - 
/* Description:
This is a late turn in...  I'm finishing it just so I can be up to date with the class.
I just add the fraction add and sub to the menu and i use the overloaded functions to perform the
operations.

*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Fraction.h"
#include "Double.h"
#include "Integer.h"
using namespace std;

#include "Menu.h"
void doubleAdd();
void doubleSub();
void doubleMul();
void doubleDiv();

void integerAdd();
void integerSub();
void integerMul();
void integerDiv();

void fractionAdd();
void fractionSub();
void Exit();

Menu m; // TODO: Fix
int main()
{

	m.addMenu("1. Add Doubles", doubleAdd);
	m.addMenu("2. Sub Doubles", doubleSub);
	m.addMenu("3. Mul Doubles", doubleMul);
	m.addMenu("4. Div Doubles", doubleDiv);
	//this is whitespace
	m.addMenu("5. Add Integer", integerAdd);
	m.addMenu("6. Sub Integer", integerSub);
	m.addMenu("7. Mul Integer", integerMul);
	m.addMenu("8. Div Integer", integerDiv);
	//this is whitespace
	m.addMenu("9. Add Fractions", fractionAdd);
	m.addMenu("10. Sub Fractions", fractionSub);
	//this is whitespace
	m.addMenu("11. Exit ", Exit);
	m.runMenu();


	return 0;
}
void fractionAdd()
{
	cout << "Please enter in a fraction to be added" << endl;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	Fraction tmp(a, b), tmp2(c, d);
	Fraction product = tmp + tmp2;
	product.printFraction();
	m.waitKey();
}
void fractionSub()
{
	cout << "Please enter in a fraction to be added" << endl;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	Fraction tmp(a, b), tmp2(c, d);
	Fraction product = tmp - tmp2;
	product.printFraction();
	m.waitKey();
}
void doubleAdd()
{
	cout << "Please enter two Doubles seperated by a space or [Enter Key Press] to be added (#.# ##.#)" << endl;
	Double tmp, tmp2;
	double a, b;
	cin >> a >> b;
	tmp = new Double(a);
	tmp2 = new Double(b);
	Double product = tmp.add(tmp2);
	cout << product.toDouble() << endl;
	m.waitKey();

}

void doubleSub()
{
	cout << "Please enter two Doubles seperated by a space or [Enter Key Press] to be subtracted (#.# ##.#)" << endl;
	Double tmp, tmp2;
	double a, b;
	cin >> a >> b;
	tmp = new Double(a);
	tmp2 = new Double(b);
	Double product = tmp.sub(tmp2);
	cout << product.toDouble() << endl;
	m.waitKey();

}


void doubleMul()
{
	cout << "Please enter two Doubles seperated by a space or [Enter Key Press] to be multiplied (#.# ##.#)" << endl;
	Double tmp, tmp2;
	double a, b;
	cin >> a >> b;
	tmp = new Double(a);
	tmp2 = new Double(b);
	Double product = tmp.mul(tmp2);
	cout << product.toDouble() << endl;
	m.waitKey();

}

void doubleDiv()
{
	cout << "Please enter two Doubles seperated by a space or [Enter Key Press] to be divided (#.# ##.#)" << endl;
	Double tmp, tmp2;
	double a, b;
	cin >> a >> b;
	tmp = new Double(a);
	tmp2 = new Double(b);
	Double product = tmp.div(tmp2);
	cout << product.toDouble() << endl;
	m.waitKey();

}
void integerAdd()
{
	cout << "Please enter two integers seperated by a space or [Enter Key Press] to be added (## #)" << endl;
	Integer tmp, tmp2;
	int a, b;
	cin >> a >> b;
	tmp = new Integer(a);
	tmp2 = new Integer(b);
	Integer product = tmp.add(tmp2);
	cout << product.toInt() << endl;
	m.waitKey();

}

void integerSub()
{
	cout << "Please enter two Integers seperated by a space or [Enter Key Press] to be subtracted (# ##)" << endl;
	Integer tmp, tmp2;
	int a, b;
	cin >> a >> b;
	tmp = new Integer(a);
	tmp2 = new Integer(b);
	Integer product = tmp.sub(tmp2);
	cout << product.toInt() << endl;
	m.waitKey();

}


void integerMul()
{
	cout << "Please enter two Integers seperated by a space or [Enter Key Press] to be multiplied (## ##)" << endl;
	Integer tmp, tmp2;
	int a, b;
	cin >> a >> b;
	tmp = new Integer(a);
	tmp2 = new Integer(b);
	Integer product = tmp.mul(tmp2);
	cout << product.toInt() << endl;
	m.waitKey();

}

void integerDiv()
{
	cout << "Please enter two Integers seperated by a space or [Enter Key Press] to be divided (# ##)" << endl;
	Integer tmp, tmp2;
	int a, b;
	cin >> a >> b;
	tmp = new Integer(a);
	tmp2 = new Integer(b);
	Integer product = tmp.div(tmp2);
	cout << product.toInt() << endl;
	m.waitKey();

}

void Exit()
{
	char c;
	cout << "Goodbye" << endl;
	exit(0);
}