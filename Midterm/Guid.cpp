#include "Guid.h"
#include "Random.h"
#include "Double.h"
#include "Integer.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <random>


Guid::Guid()
{
	createGuid();
}

void Guid::createGuid()
{
	Random tmp(1000, 9999);
	this->generator = tmp.nextInt();



}
ostream &operator << (ostream & output, Random & r)
{
	Random::shuffle();
	output << "Here is a random number: " << r.rDoubles.front() << endl;

	return output;
}
Guid::~Guid()
{
}
