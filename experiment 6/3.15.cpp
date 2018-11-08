#include"Date4.h"
int main()
{
	Date array[3] = { Date(2013,4,5),Date(2014,7,8) };
	Date *p = array;
	for (;p<array+3 ; p++)
		p->Display();
	system("pause");
	return 0;
}