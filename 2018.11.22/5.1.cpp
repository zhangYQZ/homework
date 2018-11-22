#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "创建A的对象" << endl;
	}
	~A()
	{
		cout << "析构A的对象" << endl;
		getchar();
	}
};
class B
{
public:
	B()
	{
		cout << "创建B的对象" << endl;
	}
	~B()
	{
		cout << "析构B的对象" << endl;
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