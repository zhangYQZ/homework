#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14

int main()
{
	double r;
	cout << "please input r:"<<endl;
	cin >> r;
	cout << "Բ������ǣ�" << (PI*r*r) << endl;
	cout << "Բ���ܳ��ǣ�" << (PI*r*2) << endl;
	system("pause");
	return 0;
}