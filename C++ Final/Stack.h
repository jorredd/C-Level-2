// Jordan Redd 
// 0433589
// 5/5/19
// CSIS 123A-3488
// Prof. Rickman
// Final
/* Description:
	the tests show a basic Stack Data Structure using templates.
*/
#ifndef STACK
#define STACK
#include <vector>
#include <string>
#include <iostream>
#include <exception>

using namespace std;
const int EMPTYY = -1;
const int STACKMAX = 100;
const int FULL = STACKMAX - 1;


class stackException : public exception 
{
private:
	string message;
public:
	stackException(string msg) : message(msg) {};
	virtual const char *what() { return message.c_str(); }

};

template <class T>
class Stack : public vector<T>
{
private:
	//Index
	int top;
	int count;
	T *stackArray[STACKMAX];

public:
	Stack();
	bool empty();
	bool full();
	bool push(T *data);
	T pop();
	T peek();
	int size();


};
template <class T>
int Stack<T>::size()
{
	return this->count;
}

template <class T>
bool Stack<T>::empty()
{
	return this->top == EMPTYY ? true : false;
}
template <class T>
bool Stack<T>::full()
{
	return this->top == FULL ? true : false;
}
template <class T>
Stack<T>::Stack()
	:top(EMPTYY)
{
	this->count = top + 1;
}

template <class T>
bool Stack<T>::push(T *data)
{
	if (this->full())
	{
		return false;
	}
	this->stackArray[++top] = data;
	this->count++;
	return true;
}
template <class T>
T Stack<T>::pop()
{
	if (this->empty())
	{
		throw stackException("Stack is empty");
	}

	 *this->stackArray[top--];
	 return *this->stackArray[top + 1];
	  
}
template <class T>
T Stack<T>::peek()
{
	if (this->empty())
	{
		throw stackException("Stack is empty");
	}

	return *this->stackArray[top];

}
#endif