#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Cylinder.h"
Cylinder::Cylinder(double h, double r, int x, int y) :Circle(r, x, y)
{
	SetHeight(h);
}
void Cylinder::SetHeight(double h)
{
	m_height = h > 0 ? h : 0;
}
double Cylinder::GetHeight()
{
	return m_height;
}
double Cylinder::Area()
{
	return 2 * Circle::Area() + 2 * 3.14159*GetRadius()*m_height;
}
double Cylinder::Volume()
{
	return Circle::Area()*m_height;
}
void	Cylinder::Print()
{
	Circle::Print();
	cout << ";Height=" << m_height;
}