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
#ifndef INTEGER
#define INTEGER
#include <string>
using std::string;
using std::to_string;
class Integer
{
private:
	int num;
public:
	Integer();//Assignment 3
	Integer(int d);//Assignment 3
	Integer(Integer *d);//Assignment 3

	void equals(int d);
	Integer add(Integer &d);
	Integer sub(Integer &d);
	Integer mul(Integer &d);
	Integer div(Integer &d);

	Integer add(int d);
	Integer sub(int d);
	Integer mul(int d);
	Integer div(int d);
	int toInt();
	string toString();

};

#endif