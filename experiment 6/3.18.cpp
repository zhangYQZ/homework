#include"Date5.h"
void Fun(Date DateVar)
{
	DateVar.ModifyDate(2019, 9, 9);
	DateVar.Display();
}

int main()
{
	Date DateA;
	DateA.Display();
	Fun(DateA);
	cout << "After calling fun() DateA:";
	DateA.Display();
	system("pause");
	return 0;
}