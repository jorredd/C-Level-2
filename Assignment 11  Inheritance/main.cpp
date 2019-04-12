// Jordan Redd 
// 0433589
// 4/14/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 11
/* Description:
	the tests show that the numbers class is being inherited by both Integer and Double.
*/

#include "Double.h"
#include "Integer.h"

using namespace jordan;
int main() {

	Double dbl(2.5);
	string test = dbl.data;


	Integer inter(25);
	string test2 = inter.data;

	return 0;
}