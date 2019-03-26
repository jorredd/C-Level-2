// Jordan Redd
// CSIS 123A-3488
// 3/35/19
// Prof. Rickman
// Assignment 9		
/* Description:
	header file.

*/
#pragma once
#ifndef PARSER
#define PARSER


#include <vector>
#include "Integer.h"
#include "Double.h"

using std::vector;
using std::string;

class Parser
{
private:
	//Pointers
	vector<Integer> *iNumbers = new vector<Integer>();
	vector<Double> *dNumbers = new vector<Double>();
	

public:
	Parser();
	//Parser(string "FileToBeParsed", string "OutfileForIntegers", string "OutfileForDoubles")
	Parser(string fileName, string parsedInts, string parsedDoubles);

	//runs the two WriteFile overloads
	~Parser();
	//Reads the file and sends the data to the Vector
	void parseFile(string fileName);

	//Writes the Parsed data to a new file
	void writeFile(string parsedInts, string parsedDoubles);
	void writeFile(vector<Double>* parsedDoubles);
	void writeFile(vector<Integer>* parsedInts);

	//Helper function
	void log(string say);
};

#endif // !PARSER