// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Assignment 4 - Using Complex Types - Vectors
/* Description: This assignment takes the menu from the first assignment and adds the double and integer classes functionality
to it. The only change that ive made to this file is the intorduction of the vector list and
swapping the mi array to a vector.

Added some conditions to handle the possibility of someoneone entering the wrong values into the menu. This same error handling should be put into the double and integer classes
but thats going way to far beyond what was asked of us in this assigment. plus i'd imagine we're going to have to do that later on anyways as part of module 14's error handling
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <vector>

using namespace std;

#include "Menu.h"

Menu::Menu() : count(0)
{
	this->mi.resize(100);
}
void Menu::addMenu(string Description, void(*f)())
{
	if (count < this->mi.capacity())
	{

		this->mi.at(count).func = f;
		this->mi.at(count).descript = Description;
		count++;
	}
}

void Menu::runMenu()
{
	for (;;)
	{
		system("CLS");
		for (int i = 0; i < count; i++)
		{
			if (i == 0) cout << "Double Functions" << endl; //Makes the CommandLine look a lot less cluttered
			cout << this->mi[i].descript << endl;
			//this is manually being done which is bad. it would be better to dynamically figure out where the integer functions end and double functions begin but for right now im just doing it this way.
			if (i == 3) cout << endl <<  "Integer Functions" << endl; //Makes the CommandLine look a lot less cluttered
			if (i == 7) cout << endl; // I couldnt stand the way it was formatted so i added this code to format it better	
		}
		runSelection();
	}
}


void Menu::runSelection()
{
	int select;
	bool correct;
	cin >> select;
	//loop is needed to at least be ran once, which is why i use the do while.
	do
	{
		//Now handles if you put in the wrong value for the menu. Will error u
		if (cin.fail()) //cin.fail() checks to see if the value in the cin			
		{
			correct = false;
			cin.clear(); //This corrects the stream.
			cin.ignore(); //This skips the left over stream data.
			cout << "Please enter a Menu Item number listed above" << endl;
			cin >> select;
		}
		else {
			correct = true;
		}
	} while (!correct);

	if (select <= count)
	{
		this->mi[select - 1].func();
	}
}
void Menu::waitKey()
{

	cout << "Press any key to continue" << endl;
	while (!_kbhit()); // kbhit is depricated. use _kbhit

	fflush(stdin);
}