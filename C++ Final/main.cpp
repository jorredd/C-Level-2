// Jordan Redd 
// 0433589
// 5/5/19
// CSIS 123A-3488
// Prof. Rickman
// Final
/* Description:
	the tests show a basic Stack Data Structure using templates.
*/
#include "Stack.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

using namespace std;
void program();
class fileException : public exception
{
private:
	string message;
public:
	fileException(string msg) : message(msg) {};
	virtual const char *what() { return message.c_str(); }
};

int main()
{

	Stack<int> intStack;
	Stack<string> stringStack;

	/*stringStack.push(new string("test"));
	intStack.push(new int(15));
	intStack.push(new int(1));
	intStack.push(new int(55));
	intStack.push(new int(985));*/
	try {
		intStack.pop();
		intStack.peek();
	}
	catch (stackException e)
	{
		cout << e.what() << endl;
	}

	try {
		program();
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	return 0;
	
}
#include <map>
class LinkedList {
private:
	double highestAvg;
	string highestName;
	double lowestAvg;
	string lowestName;
	map<string, double> myMap;
	Stack<string>*names;
	Stack<double>*avgs;
public:
	LinkedList();
	LinkedList(Stack<string> *n, Stack<double> *a) : names(n), avgs(a) { average(); };
	void average();
};
void LinkedList::average() {
	int ARRAYLENGTH = this->names->size();
	this->highestAvg = .000;
	for (int i = 0; i < ARRAYLENGTH; i++) {
		double condition1 = avgs->peek();
		if (condition1 > this->highestAvg) {
			string *poppedString = new string(names->pop());
			names->push(poppedString);
			names->pop();
			this->highestName = *poppedString;

			double *poppedDouble = new double(avgs->pop());
			avgs->push(poppedDouble);
			avgs->pop();
			this->highestAvg = *poppedDouble;

			this->myMap[*poppedString] = *poppedDouble;

		}
		else if (condition1 == this->highestAvg)
		{
			string *poppedString = new string(names->pop());
			names->push(poppedString);
			names->pop();
			this->highestName = *poppedString;

			double *poppedDouble = new double(avgs->pop());
			avgs->push(poppedDouble);
			avgs->pop();
			this->highestAvg = *poppedDouble;
			this->myMap[*poppedString] = *poppedDouble;
	
		}
		else if ((condition1 != this->highestAvg && this->lowestAvg == NULL) || this->lowestAvg != NULL && condition1 < this->lowestAvg)
		{
			string *poppedString = new string(names->pop());
			names->push(poppedString);
			names->pop();
			this->lowestName = *poppedString;

			double *poppedDouble = new double(avgs->pop());
			avgs->push(poppedDouble);
			avgs->pop();
			this->lowestAvg = *poppedDouble;
			this->myMap[*poppedString] = *poppedDouble;
	
		}
	}
}
// SOMETHING WRONG IN THIS BIG ASS CONDITION.... MISMATCH ON THE AVERAGES AND NAMES ########## Now im not grabbing the correct lowest anymore ###SOLVED NOW FINISH LOGIC FOR PRINTING TO SCREEN AND CLEANUP
void program()
{
	Stack<string> *names = new Stack<string>();
	Stack<double> *avgs = new Stack<double>();

	ifstream infile("avgs.txt");
	char input[100];
	int count = 0;
	if (!infile)
	{
		throw fileException("Unable to open the file for writing");
	}
	while (infile >> input)
	{
		if (count % 2 == 0) {
			cout << input << " ";
			names->push(new string(input));

		}
		else {
			cout << input << endl;
			string convert = input;
			avgs->push(new double(stod(convert)));
		}
		count++;
	}
	infile.close();

	LinkedList test(names, avgs);
	cout << "test" << endl;
}