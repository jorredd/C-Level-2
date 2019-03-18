#include "Random.h"


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

	cout << "Because the rDoubles Vector is static I can grab the values using the first instance throughout all of the COUTS " << endl;

	return 0;
}