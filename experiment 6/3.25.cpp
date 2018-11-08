#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

class Student;
class Date
{
	int year, month, day;
public:
	Date(int , int, int );
	void Display();
	friend Student;
};

class Student
{
private:
	char *speciality;
	char *name;
public:
	Student(char *pn,char*pSpec);
	~Student();
	void Display(Date&);
};

Date::Date(int y, int m, int d):year(y),month(m),day(d)
{
}

void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}

Student::Student(char*pn,char*pSpec)
{
	if (pSpec)
	{
		speciality = new char[strlen(pSpec) + 1];
		strcpy(speciality, pSpec);
	}
	else
		speciality = 0;
	if (pn)
	{
		name = new char[strlen(pn) + 1];
		strcpy(name, pn);
	}
	else
		name = 0;
}

Student::~Student()
{
	if (speciality)
		delete[]speciality;
	if (name)
		delete[]name;
}

void Student::Display(Date&obj)
{
	cout << name << endl;
	cout << speciality << endl;
	obj.Display();
	cout << "Date's another format is:";
	cout << obj.month << "_" << obj.day << "_" << obj.year << endl;
}

int main()
{
	char str1[10]="zhang",str2[10]="computer";
	Student boy(str1, str2);
	Date birthday(1990, 10, 13);
	boy.Display(birthday);
	system("pause");
	return 0;
}