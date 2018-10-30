#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
class Student
{
	int age;
	char *name;
public:
	Student(int m, char*n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	friend void disp(Student &);
	~Student()
	{
		cout << "delete it." << name << endl;
		delete[]name;
	}
};
void disp(Student &p)
{
	cout << "Student's name is " << p.name << ",age is" << p.age << endl;
}

int main()
{
	char str1[10] = "wujiang", str2[10] = "xinayu";
	Student A(18, str1);
	Student B(19,str2);
	disp(A);
	disp(B);
	system("pause");
	return 0;

}