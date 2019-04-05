// Jordan Redd 
// 0433589
// 4/5/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 10
/* Description:
Had to play catch up here since i didnt do the assignment that had us maake a lot of what this assignmemnt builds upon but i finished. Im checking to see if the string values inputed are actually 
numbers or if they have letters in them. then i use recursion to check as well. I dont understand why recursion is better than just using a loop to do the same thing though. at my job
we have some of our verification stuff using recursion and im completely lost as to why we didnt just use loops.
*/
#include "Headers.h"
#include <string>

using namespace jordan;
using std::string;

int main()
{
	string s = "20.166";
	string ss = "20.1a66";
	Double test(s);
	Double test2(ss);

	Integer inter("12");
	Integer iner("1k2");

	return 0;
}