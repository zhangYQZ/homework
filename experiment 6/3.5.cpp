#include"C:\Users\v\Desktop\ตฺศýียิดย๋\Date1.h"
int main()
{
	Date today, *t;
	today.SetDate(2006, 10, 17);
	cout << "One day is:";
	today.Display();
	t = &today;
	(*t).SetDate(2018, 10, 23);
	cout << "the other day is:";
	(*t).Display();
	system("pause");
	return 0;
}

