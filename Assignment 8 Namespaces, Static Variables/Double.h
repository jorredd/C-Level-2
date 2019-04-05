// Jordan Redd 
// 0433589
// 1/17/19
// CSIS 123A-3488
// Prof. Rickman
// Midterm
/* Description:
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#ifndef DOUBLE
#define DOUBLE
#include "Integer.h"
#include <string>
using std::string;
using std::to_string;

namespace jordan {





class Double
{
	private:
		double num;
	public:
		Double();
		Double(double d); //Assignment 3
		Double(Double *d); //Assignment 3 
		Double(Integer *i); //Assignment 3

		void equals(double d);
		Double add(Double &d);
		Double sub(Double &d);
		Double mul(Double &d);
		Double div(Double &d);

		Double add(double d);
		Double sub(double d);
		Double mul(double d);
		Double div(double d);
		double toDouble();

		string toString();
	};
}
#endif // !DOUBLE