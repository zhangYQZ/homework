#include"cir1.h"
double Circle::Area()
{
	return PI * Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	return Radius;
}