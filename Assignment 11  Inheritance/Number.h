// Jordan Redd 
// 0433589
// 4/14/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 11
/* Description:
	Class made to hold the data section for Integer and Double. Has no real functionality other than setting the data
*/

#pragma once

#include <string>
using std::string;

class Number : public string
{
public:
	string data;
	Number();
	Number(string data);
	~Number();
};

