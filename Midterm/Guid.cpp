// Jordan Redd 
// 0433589
// 3/18/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/*
Description:
uses the Random class to create a unique ID code that is very unlikely to have a collision.
"For example, the number of random version-4 UUIDs which need to be generated in order to have a 50% probability of at least one collision is 2.71 quintillion, computed as follows:
This number is equivalent to generating 1 billion UUIDs per second for about 85 years, and a file containing this many UUIDs, at 16 bytes per UUID, would be about 45 exabytes,
many times larger than the largest databases currently in existence, which are on the order of hundreds of petabytes."
 cite - https://en.wikipedia.org/wiki/Universally_unique_identifier#Collisions
 Of course the way Im creating my GUID is not how a GUID is supposed to be created is a 128-bit number. Im not quite sure how to create them in that fashion. I guess if anything this is just a close clone to a GUID
*/
#include "Guid.h"
#include "Random.h"
#include <iostream>

using std::cout;
using std::endl;

Guid::Guid() 
{
	createGuid();
	regulator();  //Double regulator just to ensure accuracy
}

Guid::Guid(int g1, int g2, int g3, int g4)
{

	builder(g1, g2, g3, g4);
	regulator(); //Double regulator just to ensure accuracy
}
void Guid::builder(int g1, int g2, int g3, int g4)
{
	this->group1 = g1;
	this->group2 = g2;
	this->group3 = g3;
	this->group4 = g4;
	regulator(); //Double regulator just to ensure accuracy
}
void Guid::createGuid()
{
	Random tmp(1000.0, 9999.0);
	builder(tmp.nextInt(), tmp.nextInt(), tmp.nextInt(), tmp.nextInt()); // regulator fires here as well
	regulator(); //Double regulator just to ensure accuracy
}
void Guid::regulator()  //Not the best way, But a "way" to handle if anything less than 1000 pops out for a GUIDs group value.  
{

	Random tmp(1000.0, 9999.0);
	if (this->group1 < 1000.0) this->group1 = tmp.nextInt(); 
	if (this->group2 < 1000.0) this->group2 = tmp.nextInt(); 
	if (this->group3 < 1000.0) this->group3 = tmp.nextInt(); 
	if (this->group4 < 1000.0) this->group4 = tmp.nextInt(); 
	
}
// Im guessing this {BELOW: Clone()}  would be a good function to use in a situation where you would want a group of objects to have the same GUID... 
//...however if a person uses a Vector and a class to pair a guid with a vector than they shouldnt really be cloning... idk, maybe this is useful in a specific situation
void Guid::clone(Guid guidID) 
{
	builder(guidID.getGroup1(), guidID.getGroup2(), guidID.getGroup3(), guidID.getGroup4()); //regulator not called here
}

int Guid::getGroup1()
{
	
	return this->group1;
}

int Guid::getGroup2()
{

	return this->group2;
}

int Guid::getGroup3()
{
	
	return this->group3;
}

int Guid::getGroup4()
{

	return this->group4;
}

void Guid::printGuid()
{
	cout << group1 << "-" << group2 << "-" << group3 << "-" << group4;
}

 ostream &operator << (ostream & output, Guid & g)
{
	 g.printGuid();
	 return output;
}

Guid::~Guid()
{
}
