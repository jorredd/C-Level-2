#include "Random.h"
#include "Double.h"
#include "Integer.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <random>


using std::string;



class Guid
{
private:
	int group1;
	int group2;
	int group3;
	int group4;


public:
	Guid();
	void createGuid();
	~Guid();
};

