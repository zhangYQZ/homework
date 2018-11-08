#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	void SetDate(int y, int m, int d);
	void Display();
};
void Date::SetDate(int y, int m, int d)
{
	year = y; month = m; day = d;
}
void Date::Display()
{
	cout << "调用该函数的对象的this指针是：";
	cout << this << endl;

	cout << "当前对象year成员的起始地址：";
	cout << &this->year << endl;

	cout << "当前对象month成员的起始地址：";
	cout << &this->month << endl;

	cout << "year=" << this->year << ",month=" << this->month << endl;
}

int main()
{
	Date DateA, DateB;
	DateA.SetDate(2018, 8, 12);
	DateB.SetDate(2019, 3, 4);
	cout << "DateA地址" << &DateA << endl;
	DateA.Display();
	cout << "DateB地址" << &DateB<< endl;
	DateB.Display();
	system("pause");
	return 0;
}
