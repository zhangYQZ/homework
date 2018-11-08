#include<iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int, int, int);
	void Display();
	int GetYear();
	int GetMonth();
	int GetDay();
};


void Date::SetDate(int y, int m, int d)
{
	year = y; month = m; day = d;
}

int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}

void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}