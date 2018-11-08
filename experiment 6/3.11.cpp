#include"Date3.h"
Date f(Date Q)
{
	Date R(Q);
	return Q;
}

int main()
{
	Date day1(2017, 4, 3);
	Date day3;
	Date day2(day1);
	Date day4 = day2;
	day3 = day2;
	day3 = f(day2);
	day3.Display();
	system("pause");
	return 0;
}