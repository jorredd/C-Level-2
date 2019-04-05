// Jordan Redd 
// 0433589
// 4/5/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 10
/* Description:
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#include "Double.h"
#include "Integer.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::size_t;
using std::stod;
namespace jordan {
	//Constructors
	Double::Double() {};
	Double::Double(double d) : num(d) {};
	Double::Double(Double *d) : num(d->toDouble()) {};
	Double::Double(Integer *i) : num((double)i->toInt()) {};
	Double::Double(string s)
	{
		string *ptr = &s;
		isNaN(ptr);
		size_t ref;
		double conv = stod(s, &ref);
		this->equals(conv);

	};

	void Double::recursiveNaN(string *s, string::iterator p, int count = 0, bool finished = false)
	{	
		if (finished) return;
		if(count == 0) p = s->begin();
	
		while (p < s->end())
		{
			if (!isdigit(*p) && *p != '.')
			{
				this->nan = true;
				cout << "Is not a Number" << endl;
				return;
			}	
			if (p < s->end() && !finished) {
			
				recursiveNaN(s, p+1, count + 1,  finished);
			}
			finished = true;
			return;
		}
		cout << "Is a Number" << endl;
 		return;
	}
	void Double::isNaN(string *s)
	{
		//make sure that there is only one decimal
		int pos;
		this->nan = false;
		pos = s->find(".", 0); // if null it may be that there is no decimal
		if (pos != string::npos)
		{
			pos = s->find(".", pos + 1);
			if (pos != string::npos)
			{
				this->nan = true;   // if not null then we have multiple .
				return;
			}
		}
		string::iterator it;
		recursiveNaN(s, it, 0 , false);
		return;
	}
	void Double::equals(double d)
	{
		this->num = d;
	}
	Double Double::add(Double &d)
	{
		double sum = num + d.num;
		Double tmp(sum);
		return tmp;

	}
	Double Double::sub(Double &d)
	{
		double differnece = num - d.num;
		Double tmp(differnece);
		return tmp;
	}
	Double Double::mul(Double &d)
	{
		double product = num * d.num;
		Double tmp(product);
		return tmp;
	}
	Double Double::div(Double &d)
	{
		double quotient = num / d.num;
		Double tmp(quotient);
		return tmp;
	}

	//Assignment 3
	Double Double::add(double d)
	{
		double sum = num + d;
		Double tmp(sum);
		return tmp;

	}
	Double Double::sub(double d)
	{
		double differnece = num - d;
		Double tmp(differnece);
		return tmp;
	}
	Double Double::mul(double d)
	{
		double product = num * d;
		Double tmp(product);
		return tmp;
	}
	Double Double::div(double d)
	{
		double quotient = num / d;
		Double tmp(quotient);
		return tmp;
	}

	double  Double::toDouble()
	{
		return this->num;
	}

	string Double::toString()
	{
		return to_string(this->num);
	}
}