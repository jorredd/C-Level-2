// Jordan Redd 
// 0433589
// 4/21/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 12
/* Description:
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#include "Integer.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::to_string;

namespace jordan {
	//Constructors
	Integer::Integer() {};
	Integer::Integer(int d) : num(d) {
		this->data = to_string(this->num);
	}
	Integer::Integer(Integer *d) : num(d->toInt()) {
		this->data = to_string(this->num);
	}
	Integer::Integer(string s)
	{
		this->data = s;
		string *ptr = &s;
		isNaN(ptr);
		size_t ref;
		int conv = stoi(s, &ref);
		this->equals(conv);

	};
	void Integer::recursiveNaN(string *s, string::iterator p, int count, bool finished)
	{
		if (finished) return;
		if (count == 0) p = s->begin();
		while (p < s->end())
		{
			if (!isdigit(*p) && *p != '.')
			{
				this->nan = true;
				cout << "Is not a Number" << endl;
				return;
			}
			if (p < s->end() && !finished) {

				recursiveNaN(s, p + 1, count + 1, finished);
			}
			finished = true;
			return;
		}
		cout << "Is a Number" << endl;
		return;
	}
	void Integer::equals(int d)
	{
		this->num = d;
	}
	Integer Integer::add(Integer &d)
	{
		int sum = num + d.num;
		Integer tmp(sum);
		return tmp;

	}
	Integer Integer::sub(Integer &d)
	{
		int differnece = num - d.num;
		Integer tmp(differnece);
		return tmp;
	}
	Integer Integer::mul(Integer &d)
	{
		int product = num * d.num;
		Integer tmp(product);
		return tmp;
	}
	Integer Integer::div(Integer &d)
	{
		int quotient = num / d.num;
		Integer tmp(quotient);
		return tmp;
	}

	//Assignment 3
	Integer Integer::add(int d)
	{
		int sum = num + d;
		Integer tmp(sum);
		return tmp;

	}
	Integer Integer::sub(int d)
	{
		int differnece = num - d;
		Integer tmp(differnece);
		return tmp;
	}
	Integer Integer::mul(int d)
	{
		int product = num * d;
		Integer tmp(product);
		return tmp;
	}
	Integer Integer::div(int d)
	{
		int quotient = num / d;
		Integer tmp(quotient);
		return tmp;
	}


	int  Integer::toInt()
	{
		return this->num;
	}

	string Integer::toString()
	{
		return to_string(this->num);
	}

}

