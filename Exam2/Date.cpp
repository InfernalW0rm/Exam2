#include "Date.h"
#include <iostream>
using namespace std;

void Date::printNum() const
{
	cout << month << "/" << day << "/" << year << endl;
};
void Date::printWord() const
{
	cout << getMonthName(month) << " " << day << ", " << year << endl;
};
void Date::printWeird() const
{
	cout << day << " " << getMonthName(month) << " " << year << endl;
};
