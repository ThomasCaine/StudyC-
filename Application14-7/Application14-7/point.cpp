#include "stdafx.h"
#include "Point.h"
#include <iostream>
using namespace std;
Point::Point(int x, int y)
{
	SetPoint(x, y);
}
void Point::SetPoint(int x, int y)
{
	m_x = x;
	m_y = y;
}
void Point::Print()
{
	cout << "(" << m_x << "," << m_y<< ")";
}