// Jordan Redd 
// 0433589
// 1/17/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm

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
	Integer nextInteger();
	double nextDbl();
	Double nextDouble();
	void setRange(double min, double max);
	void setRange(Double min, Double max);

	friend ostream &operator << (ostream & output, Random &r);

	~Random();
private:
	static double min;
	static double max;
	
	static vector<double> rDoubles;
	static void shuffle();
	static void fillVect();

};

