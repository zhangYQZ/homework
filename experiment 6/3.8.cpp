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
	cout << "���øú����Ķ����thisָ���ǣ�";
	cout << this << endl;

	cout << "��ǰ����year��Ա����ʼ��ַ��";
	cout << &this->year << endl;

	cout << "��ǰ����month��Ա����ʼ��ַ��";
	cout << &this->month << endl;

	cout << "year=" << this->year << ",month=" << this->month << endl;
}

int main()
{
	Date DateA, DateB;
	DateA.SetDate(2018, 8, 12);
	DateB.SetDate(2019, 3, 4);
	cout << "DateA��ַ" << &DateA << endl;
	DateA.Display();
	cout << "DateB��ַ" << &DateB<< endl;
	DateB.Display();
	system("pause");
	return 0;
}
