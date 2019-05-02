// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 12
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
	bool nan;
	Number();
	Number(string data);
	~Number();
	virtual string toString() = 0;
	virtual void recursiveNaN(string *s, string::iterator p, int count, bool finished) = 0;
	void isNaN(string *s);
};

