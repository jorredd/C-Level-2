// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment  13
/* Description:
	Class made to hold the data section for Integer and Double. Has no real functionality other than setting the data
*/

#pragma once
#include <exception>
#include <string>
using std::exception;
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

class NumberException : public exception
{
public:
	int errorCode;
	string message;

	NumberException() : message("This Error is beyond my Power...") {}
	NumberException(string message) : message(message) {}
	NumberException(string message, int code) : message(message), errorCode(code) {}
	virtual const char *what() { return message.c_str(); }

	string getMessage() { return this->message; };
	int getCode() { return this->errorCode; };
};