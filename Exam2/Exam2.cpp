#include <iostream>
#include "Dog.h"
#include <string>
using namespace std;

int main()
{
	Dog dog1(7, "Lab", "Annie");
	Dog dog2(4, "Pitbull", "Samson");

	cout << dog1.dogDesc() << endl;
	cout << "Age in person years: " << dog1.getAge() << endl;
	cout << "1st Trick: " << dog1.sitDown() << endl;

	cout << dog2.dogDesc() << endl;
	cout << "Age in person years: " << dog2.getAge() << endl;
	cout << "1st Trick: " << dog2.rollOver() << endl;










};