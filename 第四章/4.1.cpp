#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	char p [6]= "Wang";
	Student(int n, char *p);
	void GetName();
	int Getnum();
};

int Student::total = 0;
Student::Student(int n, char*p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}

int Student::Getnum()
{
	return num;
}

int main()
{
	cout << "The number of all Students:" << Student::total << endl;
	Student *p = new Student;
	cout << "The number of all Students:" << Student::total << endl;
	cout << "The number of all Students:" << p->total << endl;
	delete p;
	cout << "The number of all Students:" << Student::total << endl;
	Student s[2];
	cout << "The number of all Students:" << s[0].total << endl;
	cout << "The number of all Students:" << s[1].total << endl;
	system("pause");
	return 0;
}