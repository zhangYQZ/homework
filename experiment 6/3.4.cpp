#include<iostream>
using namespace std;
class Date
{
public:
	void SetDate(int, int, int);
private:
	int year, month, day;
public:
	int GetYear();
	int GetMonth();
	int GetDay;
};