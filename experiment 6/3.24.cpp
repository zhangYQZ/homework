#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

class Student;
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int d = 6);
	void Display(const Student &stu);
};

class Student
{
private:
	char *speciality;
public:
	Student(char*pSpec);
	~Student();
	friend void Date::Display(const Student &);
};

Date::Date(int y, int m, int d)
{
	year = y; month = m; day = d;
	cout << "Constructor called!\n";
}

void Date::Display(const Student &stu)
{
	cout << stu.speciality << endl;
	cout << year << "-" << month << "-" << day << endl;
}

Student::Student(char*pSpec)
{
	if (pSpec)
	{
		speciality = new char[strlen(pSpec) + 1];
		strcpy(speciality, pSpec);
	}
	else
		speciality = 0;
}

Student::~Student()
{
	if (speciality)
		delete[]speciality;
}

int main()
{
	char str1[10]="computer";
	Student zhang(str1);
	Date Birthday(1998, 8, 2);
	Birthday.Display(zhang);
	system("pause");
	return 0;
}