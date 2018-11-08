#include"Date5.h"
Date &Fun(Date &pDate)
{
	pDate.ModifyDate(2019, 9, 9);
	cout << "reference pDate:\n";
	pDate.Display();
	return pDate;
}

int main()
{
	Date DateA(2016), tDate;
	cout << "Before right Fun,DateA:\n";
	DateA.Display();
	cout << "Before right Fun,tDate:\n";
	tDate.Display();
	tDate = Fun(DateA);
	cout << "After right Fun,DateA:\n";
	DateA.Display();
	cout << "After right Fun,tDate:\n";
	tDate.Display();
	Fun(DateA) = Date(1998, 9, 22);
	cout << "After left Fun,DateA:\n";
	DateA.Display();
	cout << "After left Fun,tDate:\n";
	tDate.Display();
	system("pause");
	return 0;
}