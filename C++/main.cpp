// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Assignment 1 - Creating a Menu
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

#include "Menu.h"

void func1();
void func2();
void func3();
void func4();
void Exit();
Menu m; // TODO: Fix
int main()
{
	
	m.addMenu("1. Function1 ", func1);
	m.addMenu("2. Function2 ", func2);
	m.addMenu("3. Function3 ", func3);
	m.addMenu("4. Function4 ", func4);
	m.addMenu("Exit ", Exit);
	m.runMenu();


	return 0;
}
void func1()
{
	char c;
	cout << "Hello from function 1" << endl;
	m.waitKey();
	cin >> c; 
;
}

void func2()
{
	char c;
	cout << "Hello from function 2" << endl;
	m.waitKey();
	cin >> c;
}


void func3()
{
	char c;
	cout << "Hello from function 3" << endl;
	m.waitKey();
	cin >> c;
}

void func4()
{
	char c;
	cout << "Hello from function 4" << endl;
	m.waitKey();
	cin >> c;
}


void Exit()
{
	char c;
	cout << "Goodbye" << endl;
	exit(0);
}