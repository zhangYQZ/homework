#include"Date5.h"
void Fun(Date &pDate)
{
	pDate.ModifyDate(2019, 9, 9);
	pDate.Display();
}

int main()
{
	Date DateA(2011);
	DateA.Display();
	Fun(DateA);
	cout << "After calling fun() DateA:";
	DateA.Display();
	system("pause");
	return 0;
}