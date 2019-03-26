// Jordan Redd 
// 0433589
// 3/18/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/*
Description:
Tests to ensure that the Random class is working as it should be... Also tests my attempted GUID class on the bottom. I'd love to get some feedback on what you think about my Guid if you have the spare time to check that code.
*/
#include "Random.h"
#include "Guid.h"


int main()
{
	Random test;
	cout << "Here is a Default Random Number: " << test << endl;	

	Random test2(5);
	cout << "Here is a Random Number seeded at 5: " << test << endl;

	Random test3(0.0, 10.0);
	cout << "Here is a new Random Number in between 0.0 & 10.0: " << test << endl;

	Random test4(0, 5);
	cout << "Here is another Random Number generated from 0.0 & 5.0: " << test << endl;

	Random test5(0, 1);
	cout << "Here is another Random Number generated from 0.0 & 0.1: " << test << endl << endl;

	cout << "Because the rDoubles Vector is static I can grab the values using the first instance throughout all of the COUTS " << endl << endl;

	//EVERTING BELOW HERE IS EXTRA WORK I DID TESTING OUT THE POWER OF THE RANDOM CLASS WE WERE ASSIGNED TO CREATE
	cout << "I wanted to try something out with this assignment and make a Guid " << endl;
	Guid ID;
	Guid UserID;
	Guid Phony;
	Phony.clone(UserID);

	cout << "Here is a GUID made from the Random() Class:\nEx: Object1 " << ID << endl << endl;
	cout << "Another Guid.\nEx: Jredd@msjc.edu " << UserID << endl << endl;

	cout << "Because GUID is not static like Random(). Each instance of the class generates its own stored Unique ID. \nEx: Object1 (ID) Guid is --------> " << ID << 
			"\nJredd@msjc.edu (UserID) Guid is -> " << UserID << endl << endl;

	cout << "Doing something that probably should never be done with \"Unique ID'S\". \nEx: Phony's Guid ID is same as Jredd@msjc.edu (UserID) -> " << Phony << endl << endl;
	cout << "Ex: Jredd@msjc.edu Guid ID is --------------------------> " << UserID << endl;

	//So what we can do with this is make another class that could hold both the Guid and whatever other type of data we want. That Guid will then be the Unique identifier for that data and be used to grab it

	return 0;
}