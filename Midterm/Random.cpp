// Jordan Redd 
// 0433589
// 3/18/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/*
Description:
Creates random numbers. This claas uses static variables so when one instance is created the actual randomized numbers can be accessed through any other instance created. Howeber
whenever a new instance is created the numbers are randomized again.
*/
#include "Random.h"
#include "Double.h"
#include "Integer.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <random>

vector<double>Random::rDoubles;
double Random::min = 0;
double Random::max = RAND_MAX; 

Random::Random()
{
	bool vEmpty = rDoubles.empty();
	if (!vEmpty) {
		rDoubles.resize(250);
		srand(time(0));
		fillVect();
	}
	else {
		rDoubles.clear();
		rDoubles.resize(250);
		srand(time(0));
		fillVect();
	}
}

Random::Random(int seed)
{
	bool vEmpty = rDoubles.empty();
	if (!vEmpty) {
		srand(seed);
		rDoubles.resize(250);
		fillVect();
	}
	else {
		srand(seed);
		rDoubles.clear();
		rDoubles.resize(250);
		fillVect();
	}

}

Random::Random(double min, double max)
{
	bool vEmpty = rDoubles.empty();
	if (!vEmpty) {
		srand(time(0));
		rDoubles.clear();
		rDoubles.resize(250);
		setRange(min, max);
		fillVect();
	}
	else {
		srand(time(0));
		rDoubles.resize(250);
		setRange(min, max);
		fillVect();
	}
}

Random::Random(Double min, Double max)
{
	bool vEmpty = rDoubles.empty();
	if (!vEmpty) {
		srand(time(0));
		rDoubles.clear();
		rDoubles.resize(250);
		setRange(min, max);
		fillVect();
	}
	else {
		srand(time(0));
		rDoubles.resize(250);
		setRange(min, max);
		fillVect();
	}
}

int Random::nextInt()
{
	shuffle();
	return (int)rDoubles.front(); // Im not entriely sure how these next functions are supposed to operate based on the instructions so im just shuffling and returning the front as an integer
}

Integer Random::nextInteger()
{
	shuffle();
	int shift = (int)rDoubles.front(); // Im not entriely sure how these next functions are supposed to operate based on the instructions so im just shuffling and returning the front as a Integer
	return Integer(shift);
}

double Random::nextDbl()
{
	shuffle();
	return rDoubles.front(); // Im not entriely sure how these next functions are supposed to operate based on the instructions so im just shuffling and returning the front 
}

Double Random::nextDouble()
{
	shuffle();
	return Double(rDoubles.front()); // Im not entriely sure how these next functions are supposed to operate based on the instructions so im just shuffling and returning the front as a Double

}
void Random::setRange(double min, double max)
{
	Random::min = min;
	Random::max = max;
}

void Random::setRange(Double min, Double max)
{

	Random::min = min.toDouble();
	Random::max = max.toDouble();
}

void Random::shuffle()
{
	using namespace std;
	random_device rd;
	mt19937 g(rd());

	std::shuffle(rDoubles.begin(), rDoubles.end(), g);

}

void Random::fillVect()
{
	int count = 0;
	vector<double>::iterator p;
	for (p = rDoubles.begin(); p < rDoubles.end(); p++)
	{
		*p = (((double)rand() / (double)RAND_MAX) * (Random::max - Random::min)) + Random::min;
		if (count == 225)
		{
			shuffle();
		}
		count++;
	}

	shuffle();
}
ostream &operator << (ostream & output, Random & r)
{
	Random::shuffle();
	output << r.rDoubles.front();

	return output;
}
Random::~Random()
{
}
