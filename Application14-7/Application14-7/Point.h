#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
#include "Shape.h"
class Point :public Shape
{
public:
	Point(int = 0, int = 0);
	void SetPoint(int, int);
	int GetX() const { return m_x; }
	int GetY() const { return m_y; }
	virtual void PrintShapeName() { cout << "Point:"; }
	virtual void Print();
private:
	int m_x, m_y;
};
#endif