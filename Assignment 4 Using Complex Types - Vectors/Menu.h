// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Assignment 4 - Using Complex Types - Vectors
/* Description: This assignment takes the menu from the first assignment and adds the double and integer classes functionality
to it. The only change that ive made to this file is the intorduction of the vector list and
swapping the mi array to a vector. 

*/
#ifndef MENU
#define MENU

#include <vector>

const int MAXCOUNT = 20;
struct menuItem
{
	void(*func)();
	std::string descript;
};

class Menu
{
private:
	vector<menuItem>mi;
	int count;
	void runSelection();
	

public:
	Menu();
	void addMenu(string Description, void(*f)());
	void runMenu();
	void waitKey();
	

};
#endif
