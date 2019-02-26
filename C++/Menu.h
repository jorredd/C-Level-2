// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Assignment 1 - Creating a Menu
#ifndef MENU
#define MENU

const int MAXCOUNT = 20;
struct menuItem 
{
	void(*func)();
	std::string descript;
};

class Menu
{
private:
	menuItem mi[MAXCOUNT];
	int count;
	void runSelection();

public:
	Menu();
	void addMenu(string Description, void(*f)());
	void runMenu();
	void waitKey();

};
#endif
