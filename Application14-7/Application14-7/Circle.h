#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
class Circle :public Point
{
public:
	Circle(double r = 0.0, int x = 0, int y = 0);
	void SetRadius(double);
	double GetRadius();
	virtual double Area();
	virtual void PrintShapeName() { cout << "Circle:"; }
	virtual void Print();
private:
	double m_radius;
};
#endif