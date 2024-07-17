#include <iostream>
#include "Dog.h"
#include "Date.h"
#include <string>
using namespace std;

int main()
{
	cout << "Part 1: Dog" << endl << endl;

	Dog dog1(7, "Lab", "Annie");
	Dog dog2(4, "Pitbull", "Samson");

	cout << dog1.dogDesc() << endl;
	cout << "Age in person years: " << dog1.getAge() << endl;
	cout << "1st Trick: " << dog1.sitDown() << endl;

	cout << dog2.dogDesc() << endl;
	cout << "Age in person years: " << dog2.getAge() << endl;
	cout << "1st Trick: " << dog2.rollOver() << endl;

	cout << "Part 2: Date" << endl << endl;

	Date date1;
	Date date2(12, 25, 2018);

	cout << "First Date: " << endl;
	date1.printNum();
	date1.printWord();
	date1.printWeird();

	cout << "Second Date: " << endl;
	date2.printNum();
	date2.printWord();
	date2.printWeird();

};