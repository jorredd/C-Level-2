// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 12
/* Description:
	Class made to hold the data section for Integer and Double. Has no real functionality other than setting the data
*/

#include "Number.h"

Number::Number()
{
	this->data = "0";
}

Number::Number(string data)
{
	this->data = data;
}


Number::~Number()
{
}

void Number::isNaN(string *s)
{
	//make sure that there is only one decimal
	this->nan = false;
	string::iterator it;
	recursiveNaN(s, it, 0, false);
	return;
}
