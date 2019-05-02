// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 12
/* Description:
	the tests show that the numbers class is being inherited by both Integer and Double.
*/

#include "Double.h"
#include "Integer.h"

using namespace jordan;
int main() {

	Double dbl(2.5);
	string test = dbl.data;

	Double fail("2.89gd5");
	Double success("2.5");
	


	Integer inter(25);
	string test2 = inter.data;

	Integer fail2("254sa458");
	Integer success2("25");


	return 0;
}