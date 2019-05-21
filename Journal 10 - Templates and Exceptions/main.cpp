// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 10 - Templates & Exceptions

#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	Calc<int> c(0, 0);
	int d;
	try {
		int d = c.add();
		cout << d << endl;
	}
	catch (calcException *msg)
	{
		cout << msg->what() << endl;
	}
	return 0;
}