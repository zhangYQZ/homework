#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "����A�Ķ���" << endl;
	}
	~A()
	{
		cout << "����A�Ķ���" << endl;
		getchar();
	}
};
class B
{
public:
	B()
	{
		cout << "����B�Ķ���" << endl;
	}
	~B()
	{
		cout << "����B�Ķ���" << endl;
		getchar();
	}
private:
	A a;
};

int main()
{
	B obj;
	system("pause");
	return 0;
}