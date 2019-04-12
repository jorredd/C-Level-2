// Jordan Redd 
// 0433589
// 4/14/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 11
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
