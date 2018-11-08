#include"Date4.h"
int main()
{
	Date *q = new Date(2010, 4, 1);
	cout << "one dynamic object is:" << endl;
	q->Display();
	delete q;
	q = new Date[3];
	q[0] = Date(2019, 9, 9);
	q[1] = Date(2013, 6, 6);
	for (int i = 0; i < 3; i++)
		q[i].Display();
	delete[]q;
	system("pause");
	return 0;
}