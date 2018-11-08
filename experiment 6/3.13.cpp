#pragma warning(disable:4996) 
#include <cstring>
#include <iostream> 
using namespace std; 
class Student 
{  	char *specialty; public:
	Student(const Student &r);
	Student(char *pSpec = 0);
	~Student();  	void Show();
};
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];   strcpy(specialty, r.specialty);
	}
	else specialty = 0;
}
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];  	 	strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)  	 	delete[]specialty;
} void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}  int main()
{
	char str[10] = "computer";
	Student zhang(str);  	
	Student wang(zhang);  	
	zhang.Show();  	
	wang.Show();  	
	system("pause");  	
	return 0;
}
