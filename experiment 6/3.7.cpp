#include<iostream>
using namespace std;
class Date
{
public:
	int year, month;
protected:
	int day;
public:
	void Init(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	int GetDay()
	{
		return day;
	}
	int GetYear()
	{
		return year;
	}
	int  SetYear(int   y)
	{
		year = y;
		return year;
	}
}DateA,DateB;

int main()
{
	DateA.Init(2011, 7, 23);
	DateB.SetYear(2012);
	cout << "DateA.year=" << DateA.GetYear() << endl;
	cout << "DateB.day=" << DateB.GetDay() << endl;

	cout << "DateA.year=" << DateA.year << endl;
	cout << "DateB.year=" << DateB.year << endl;
	cout << "DateB.year=" << DateB.GetYear() << endl;

	system("pause");
	return 0;
}