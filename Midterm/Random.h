#include "Double.h"
#include "Integer.h"
#include <vector>
#include <iostream>

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
	~Random();
private:
	static double min;
	static double max;
	
	static vector<double> rDoubles;
	static void shuffle();
	static void fillVect();


};

