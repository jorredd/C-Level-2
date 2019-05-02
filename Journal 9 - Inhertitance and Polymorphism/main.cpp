#include <iostream>
using namespace std;

class Animal
{

private: 
	int legs;

	public:
		void setLegs(int legs);
		int getLegs();
		Animal() :legs(4) {}
		void talk();
		virtual void speak() = 0;
};
void Animal::talk()
{
	speak();
}
void Animal::setLegs(int legs)
{
	this->legs = legs;

}

int Animal::getLegs()
{
	return this->legs;

}

class Cat : public Animal
{
public:
	void speak();
};
void Cat::speak() {

	cout << "meow" << endl;
}

class Dog : public Animal
{
public:
	void speak();
};
void Dog::speak() {

	cout << "Bark" << endl;
}

class Elephant : public Animal
{
public:
	void speak();
};
void Elephant::speak() {

	cout << "Snarl" << endl;
}

int main()
{
	Cat cat;
	cat.setLegs(3);
	Dog dog;
	Elephant elephant;

	Animal *arr[3];
	arr[0] = &cat;
	arr[1] = &dog;
	arr[2] = &elephant;

	arr[0]->talk();
	arr[1]->talk();
	arr[2]->talk();

	cout << cat.getLegs() << endl;
	cat.talk();

	return 0;
}