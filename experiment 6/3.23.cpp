#include"Date6.h"

int main()
{
	Date YourBirthday(1998,9, 3),MyBirthday(1999,9,2);
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "Birthday is not the same!\n";
	system("pause");
	return 0;
}