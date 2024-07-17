#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

int Dog::getAge() const
{
	return age * 7;
};

string Dog::dogDesc() const
{
	return "Name:" + name + " Breed: " + breed + " Age:" + to_string(age);
};

string Dog::rollOver() const
{
	return name + " rolls over and sits up!";
};
string Dog::sitDown() const
{
	return name + " sits down in front of you!";
};
