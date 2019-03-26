// Jordan Redd
// CSIS 123A-3488
// 3/35/19
// Prof. Rickman
// Assignment 9		
/* Description:
	Looks through the Numbers.txt file and seperates the ints and doubles into their own files. I missread the directions and also inccluded a third overloaded function to create the external files a slightly different wat. After
	all that hard work i couldnt bring myself to deleting it out. So the the files are constructed using the Pointer to the Vectors in the ~Destructor. In the constructor i use my own method.
	In total 4 files are generated from these two lines of code in main. string log(string say) is just a helper function i use for myself so i can cout quicker
*/
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>

using  namespace std;

//does nothing..
Parser::Parser()
{
};

//Parser(string "FileToBeParsed", string "OutfileForIntegers", string "OutfileForDoubles")
Parser::Parser(string fileName, string parsedInts, string parsedDoubles)
{
	parseFile(fileName);
	writeFile(parsedInts, parsedDoubles);
};

//Calls two overloaded writeFile functions then it says goodbye...
Parser::~Parser()
{
	writeFile(this->iNumbers);
	writeFile(this->dNumbers);
	log("Mr. Stark, I don't feel so good...");
};

//Reads the Numbers.txt file and determins if the number on each line is a integer or a double and stores them in the respective <Vector>
void Parser::parseFile(string fileName)
{
	ifstream infile(fileName + ".txt");
	if (!infile)
	{
		log("Error opening file for reading");
		exit(-1);
	}
	string input;
	while (getline(infile, input))
	{
		
			if (input.find(".") != -1 )
			{
				double convert = stod(input);
				this->dNumbers->push_back(new Double(convert));
			}	
			else {
				int convert = stoi(input);
				this->iNumbers->push_back(new Integer(convert));
			}
	}
	infile.close();
	log("File Parsed Successfully");
};

//Takes what you want the file names of the parsed input for integers and doubles to be and then creates those files with the parsd input all happening from within this function
void Parser::writeFile(string parsedInts, string parsedDoubles)
{
	//Create an instance of ofstream and open parsedInts.txt 
	ofstream ints(parsedInts + ".txt");
	

	//Make sure the file was opened
	if (!ints)
	{
		log("Error opening file ");
		exit(0);
	}

	vector <Integer>::iterator I;
	for (I = this->iNumbers->begin(); I < this->iNumbers->end(); I++)
	{
		ints << I->toString() << endl;
	}

	ints.close();

	ofstream doubles(parsedDoubles + ".txt");

	vector <Double>::iterator D;
	for (D = this->dNumbers->begin(); D < this->dNumbers->end(); D++)
	{
		doubles << D->toString() << endl;
	}
	doubles.close();
};

//Overload takes a pointer to a vector holding Doubles. Uses data in that vector to generate new file
void Parser::writeFile(vector<Double> *parsedDoubles)
{
	ofstream doubles("ParsedVectorArgumentDoubles.txt");

	vector <Double>::iterator D;
	for (D = parsedDoubles->begin(); D < parsedDoubles->end(); D++)
	{
		doubles << D->toString() << endl;
	}
	doubles.close();
};
//Overload takes a pointer to a vector holding Integers. Uses data in that vector to generate new file
void Parser::writeFile(vector<Integer> *parsedInts)
{
	//Create an instance of ofstream and open parsedInts.txt 
	ofstream ints("ParsedVectorArgumentIntegers.txt");


	//Make sure the file was opened
	if (!ints)
	{
		log("Error opening file ");
		exit(0);
	}

	vector <Integer>::iterator I;
	for (I = parsedInts->begin(); I < parsedInts->end(); I++)
	{
		ints << I->toString() << endl;
	}

	ints.close();


};

void Parser::log(string say)
{
	cout << say << endl;
};