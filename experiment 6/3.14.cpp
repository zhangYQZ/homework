#include"Date4.h"
int main()
{
	Date array[3] = { Date(2013,4,5),Date(2014,7,8) };
	for (int i = 0; i < 3; i++)
		array[i].Display();
	system("pause");
	return 0;
}