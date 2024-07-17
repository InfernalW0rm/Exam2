#pragma once
#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;
class Dog
{
private:
	int age;
	string breed;
	string name;
public:
	Dog();
	Dog(int a, string b, string n) : 
		age(a), breed(b), name(n){};
	int getAge() const;
	string dogDesc() const;
	string rollOver() const;
	string sitDown() const;
};



#endif
