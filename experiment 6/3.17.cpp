#include"Date4.h"
Date DateA(2015, 8, 8), DateB(2013, 7, 8);
Date &pDate = DateA;
void f()
{
	DateA.Display();
	DateB.Display();
	pDate.Display();
}
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;
	cout << "After pDate=DateB,DateA,DateB,pDate:" << endl;
	f();
	pDate = Date(2022, 10, 2);
	cout << "After pDate=Date(2022,10,2),DateA,DateB,pDate:" << endl;
	f();
	system("pause");
	return 0;
}