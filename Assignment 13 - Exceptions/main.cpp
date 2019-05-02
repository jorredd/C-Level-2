// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 13
/* Description:
	the tests show that the NumbersException class is working properly.
*/

#include "Double.h"
#include "Integer.h"
#include <iostream>
using namespace jordan;
int main() {

	Double dbl(2.5);
	string test = dbl.data;

	try {

		Double fail("2.89gd5");
	}
	catch (NumberException msg)
	{
		std::cout << msg.what() << std::endl;
	}

	Integer inter(25);
	string test2 = inter.data;

	try {

		Integer fail2("254sa458");
	}
	catch (NumberException msg)
	{
		std::cout << msg.what() << std::endl;
	}

	Integer success2("25");
	Double success("2.5");

	return 0;
}