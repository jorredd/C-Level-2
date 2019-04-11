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

