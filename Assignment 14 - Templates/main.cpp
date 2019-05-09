// Jordan Redd 
// 0433589
// 5/5/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 14
/* Description:
	the tests show a basic Stack Data Structure using templates.
*/
#include "Stack.h"
#include <string>

using namespace std;

int main()
{

	Stack<int> intStack;
	Stack<string> stringStack;

	stringStack.push(new string("test"));
	intStack.push(new int(15));
	intStack.push(new int(1));
	intStack.push(new int(55));
	intStack.push(new int(985));
	intStack.pop();
	intStack.peek();

	return 0;
}