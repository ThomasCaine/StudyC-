#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"
class Cylinder :public Circle
{
public:
	Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
	void SetHeight(double);
	double GetHeight();
	virtual double Area();
	virtual double Volume();
	virtual void PrintShapeName() {cout << "Cylinder:";}
	virtual void Print();
private:
	double m_height;
};
#endif