// Jordan Redd 
// 0433589
// 3/18/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/*
Description:
Creates random numbers. This claas uses static variables so when one instance is created the actual randomized numbers could be accessed through any other instance created. Howeber
whenever a new instance is created the numbers are randomized again.
*/
#ifndef RANDOM
#define RANDOM


#include "Double.h"
#include "Integer.h"
#include <vector>
#include <iostream>
#include <random>

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

using std::vector;

class Random
{
public:
	Random();
	Random(int seed);
	Random(double min, double max);
	Random(Double min, Double max);

	int nextInt();
	double nextDbl();

	Integer nextInteger();
	Double nextDouble();

	void setRange(double min, double max);
	void setRange(Double min, Double max);

	friend ostream &operator << (ostream & output, Random &r);

	~Random();
private:
	static vector<double> rDoubles;

	static double min;
	static double max;

	static void shuffle();
	static void fillVect();

};

#endif // !RANDOM