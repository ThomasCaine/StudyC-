#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Circle.h"
Circle::Circle(double r, int a, int b) :Point(a, b)
{
	SetRadius(r);
}
void Circle::SetRadius(double r)
{
	m_radius = r > 0 ? r : 0;
}
double Circle::GetRadius()
{
	return m_radius;
}
double Circle::Area()
{
	return 3.14159*m_radius*m_radius;
}
void Circle::Print()
{
	Point::Print();
	cout << ";Radius=" << m_radius;
}