#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
	string getMonthName(int month) const 
	{
		const string months[] = { "January", "Feburary", "March", "April", "May", "June",
			"July", "August", "September", "October", "November", "December" };
		return months[month - 1];
	}
public:
	Date() :
		day(1), month(1), year(2000){};
	Date(int month, int day, int year) : month(month), day(day), year(year) {};
	~Date() {};
	void printNum() const;
	void printWord() const;
	void printWeird() const;
};

#endif

