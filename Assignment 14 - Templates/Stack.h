// Jordan Redd 
// 0433589
// 5/5/19
// CSIS 123A-3488
// Prof. Rickman
// Assignment 14
/* Description:
	the tests show a basic Stack Data Structure using templates.
*/
#ifndef STACK
#define STACK
#include <vector>
#include <string>
#include <iostream>

using namespace std;
const int EMPTYY = -1;
const int STACKMAX = 100;
const int FULL = STACKMAX - 1;

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
	void pop();
	void peek();


};
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
void Stack<T>::pop()
{
	if (this->empty())
	{
		return;
	}

	this->stackArray[top--];
}
template <class T>
void Stack<T>::peek()
{
	cout << *this->stackArray[top] << endl;

}
#endif