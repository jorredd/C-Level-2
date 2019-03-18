#include "Random.h"


int main()
{
	Random test(5);
	Random test2(6);

	cout << test2 << endl;

	Random *ptr = &test;
	delete ptr;

	return 0;
}