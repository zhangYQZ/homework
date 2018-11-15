#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	char na[10] = "Zhuli";
	int n = 1;
	Person(int n, char *na);
	~Person();
	void Print();
	void Print()const;
	void ModifyAge();
};

Person::Person(int n, char *na)
{
	age = n;
	name = new char(strlen(na) + 1);
	strcpy(name, na);
}

Person::~Person()
{
	delete[]name;
}

void Person::Print()
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is general Print()." << endl;
}

void Person::Print()const
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is general Print()." << endl;
}

void Person::ModifyAge()
{
	age++;
}
int main()
{
	char str3[3] = "wu",str4[7]="zhang";
	const Person p1(17, str3);
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, str4);
	cout << "Output const object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	system("pause");
	return 0;
}