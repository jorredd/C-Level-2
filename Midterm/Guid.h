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
#ifndef GUID
#define GUID

#include "Random.h"
#include <iostream>

class Guid 
{
private:
	int group1;
	int group2;
	int group3;
	int group4;
	void builder(int g1, int g2, int g3, int g4);
	void createGuid();
	void regulator();


public:
	Guid();
	Guid(int g1, int g2, int g3, int g4);
	int getGroup1();
	int getGroup2();
	int getGroup3();
	int getGroup4();
	void clone(Guid guidID);
	void printGuid();
	friend ostream &operator << (ostream & output, Guid &g);
	~Guid();
};


#endif // !GUID
