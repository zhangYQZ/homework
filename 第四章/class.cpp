#pragma warning (disable:4996)
#include"student.h"
int Student::count = 0;
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char*num, char*spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
	count++;
}

Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
	count++;
}

Student::~Student()
{
	cout << "DisCon" << endl;
	if (name)
		delete []name;
	count--;
}

char*Student::GetName()const
{
	return name;
}

char* Student::GetID()
{
	return ID;
}
int Student::GetAge()const
{
	return age;
}
char *Student::GetSpec()
{
	return speciality;
}

char*Student::GetNumber()
{
	return number;
}
void Student::Display()const
{
	cout << "姓  名：  " << name << endl;
	cout << "身份证：  " << ID << endl;
	cout << "学  号：  " << number << endl;
	cout << "专  业：  " << speciality << endl;
	cout << "年  龄：  " << age << endl << endl;
}

void Student::Input()
{
	char na[10];
	cout << "输入姓名： ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证： ";
	cin >> ID;
	cout << "输入年龄: ";
	cin >> age;
	cout << "输入专业: ";
	cin >> speciality;
	cout << "输入学号";
	cin >> number;
	count++;
}

void Student::Insert()
{
	if (!age)
		Input();
}

void Student::Delete()
{
	age = 0;
	count--;
}

int Student::GetCount()
{
	return count;
}