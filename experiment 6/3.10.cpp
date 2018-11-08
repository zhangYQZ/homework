#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int y=2000, int m=1, int d=1);
	void Display();
};

Date::Date(int y, int m, int d)
{
	cout << "Executing constructor¡­\n";
	year = y;
	month = m;
	day = d;
}

void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}

int main()
{
	Date initiateday;
	Date newday(2006);
	Date today(2018, 4, 5);
	cout << "Initiateday is:";
	initiateday.Display();
	cout << "NewDay is:";
	newday.Display();
	cout << "Today is:";
	today.Display();
	system("pause");
	return 0;
}