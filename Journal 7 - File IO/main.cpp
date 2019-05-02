// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 7 - File IO
//fraction.cpp
//main
#include <iostream>
#include <fstream>
#include "Fraction.h"


using namespace std;

void writeNumbers(int amount);
void readNumbers();
void writeFraction(int amount);
void readFraction();
int main()
{



	writeFraction(5);
	readFraction();


	return 0;
}
void writeNumbers(int amount)
{
	ofstream outfile("Numbers.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}
	for (int i = 0; i < amount; i++)
	{
		outfile << rand() % 100 << endl;
	}

	outfile.close();
}
void readNumbers()
{
	ifstream infile("Numbers.txt");
	char input[100];
	if (!infile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}
	while (infile >> input)
	{
		cout << input << endl;
	}
	infile.close();
}
void writeFraction(int amount)
{
	ofstream outfile("Fractions.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}
	for (int i = 0; i < amount; i++)
	{
		Fraction tmp;
		tmp.setFraction(rand() % 100, rand() % 100 + i * i);
		outfile << tmp.getFraction() << endl;
	}

	outfile.close();
}
void readFraction()
{
	ifstream infile("Fractions.txt");
	char input[100];
	if (!infile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}
	while (infile >> input)
	{
		cout << input << endl;
	}
	infile.close();
}