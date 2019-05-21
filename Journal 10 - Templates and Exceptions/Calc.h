// Jordan Redd
// CSIS 123A-3488
// Prof. Rickman
// Journal 10 - Templates & Exceptions

#include <string>
#include <exception>

using namespace std;

class calcException : public exception
{
private:
	string message; 
public:
	calcException(string msg) : message(msg) {};
	virtual const char *what() { return message.c_str(); }
};


#pragma once
template <class T>
class Calc
{
private:
	int x, y;

public:
	Calc() { x = 0, y = 0; }
	Calc(T a, T b) { x = a, y = b; };
	T add();
	T sub();
	T mul();
	T div();

};

template <class T>
T Calc<T>::add()
{
	if (this->y == 0) throw (new calcException("Invalid Number"));
	return this->x + this->y;

}
template <class T>
T Calc<T>::sub()
{
	if (this->y < 0) throw (new calcException("Invalid Number"));
	return this->x - this->y;

}
template <class T>
T Calc<T>::mul()
{
	if (this->y < 0) throw (new calcException("Invalid Number"));
	return this->x * this->y;

}
template <class T>
T Calc<T>::div()
{
	if (this->y == 0 || this->x == 0) throw (new calcException("Invalid Number -- Cannot divide by Zero (0)"));
	return this->x/this->y;

}