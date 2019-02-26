// Jordan Redd 
// 0433589
// 1/17/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 3 - OverLoaded Constructors
/* Description:  
Two very identical complex classes. One named Double and one named Integer. Double takes in primitive type double
and Integer takes in primitive type int. They have public methods that allows addition,multiplication,subtraction,division
of their own type and of primitive types int/double. Those same methods return Doubles/Integers instead. Once returned into a variable that variable would now
hold the returned Double/Integer and with the methods toInt/toDouble We can return the value within the Double/Integer in a Cout
*/
#include <iostream>
#include "Double.h"
#include "Integer.h"

using namespace std;
void overloadedIntegerTest();
void overloadedDoubleTest();
void IntegerTest();
void DoubleTest();
int main()
{
	IntegerTest();
	cout << endl;
	DoubleTest();
	cout << endl;
	overloadedIntegerTest();
	cout << endl;
	overloadedDoubleTest();

	return 0;
}

void overloadedIntegerTest() //Assignment 3
{
	cout << "Tests for overloaded Integer Class" << endl;
	Integer test(25);
	Integer testerson(&test), t3;
	t3 = testerson.add(3);
	cout << t3.toInt() << endl;
}

void overloadedDoubleTest() //Assignment 3
{
	cout << "Tests for overloaded Double Class" << endl;
	Integer test(10);
	Double testerson(&test), d3;
	d3 = testerson.add(1.5);
	cout << d3.toDouble() << endl;

}

void IntegerTest()
{
	cout << "Tests for Integer Class" << endl;
	//Addition Test
	Integer x(13);
	Integer y; 
			y.equals(3); 
	Integer z = x.add(y);
	cout << z.toInt() << endl; // Output: 16

	//Subtraction Test
	Integer xx(13);
	Integer xy;
			xy.equals(3);
	Integer xz = xx.sub(xy);
	cout << xz.toInt() << endl; // Output: 10

	//Multiplication Test
	Integer yx(13);
	Integer yy;
			yy.equals(3);
	Integer yz = yx.mul(yy);
	cout << yz.toInt() << endl; // Output: 39

	//Division Test
	Integer zx(30);
	Integer zy;
			zy.equals(3);
	Integer zz = zx.div(zy);
	cout << zz.toInt() << endl; // Output: 10
}
void DoubleTest()
{
	cout << "Tests for Double Class" << endl;
	//Addition Test
	Double x(13.15);
	Double y(3.15);
	Double z = x.add(y);
	cout << z.toDouble() << endl; // Output: 16.3

	//Subtraction Test
	Double xx(13.15);
	Double xy(3.15);
	Double xz = xx.sub(xy);
	cout << xz.toDouble() << endl; // Output: 10

	//Multiplication Test
	Double yx(2.5);
	Double yy(2.5);
	Double yz = yx.mul(yy);
	cout << yz.toDouble() << endl; // Output: 6.25

	//Division Test
	Double zx(13.15);
	Double zy(3.15);
	Double zz = zx.div(zy);
	cout << zz.toDouble() << endl; // Output: 4.1746
}