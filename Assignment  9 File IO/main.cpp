// Jordan Redd
// CSIS 123A-3488
// 3/35/19
// Prof. Rickman
// Assignment 9		
/* Description:
	Looks through the Numbers.txt file and seperates the ints and doubles into their own files. I missread the directions and also inccluded a third method to creating the external files. After 
	all that hard work i couldnt bring myself to deleting it out. So the the files are constructed using the Pointer to the Vectors in the ~Destructor. In the constructor i use my own method.
	In total 4 files are generated from these two lines of code in main.
*/
#include "Includes.h"
int main()
{

	Parser *parsedFile = new Parser("Numbers", "ParsedInts", "ParsedDoubles");
	delete parsedFile; // set a breakpoint here, run Debug, and check the value of parsedFIle to see that the vectors hold the correct data
	
	return 0;
}