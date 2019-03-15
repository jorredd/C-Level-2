#include "Random.h"


int main()
{
	Random test(5);
	Random test2(6);

	Random *ptr = &test;
	delete ptr;

	return 0;
}