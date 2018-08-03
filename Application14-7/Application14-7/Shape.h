#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
public:
	virtual double Area() { return 0.0; }
	virtual double Volume() { return 0.0; }
	virtual void PrintShapeName() = 0;
	virtual void Print() = 0;
};
#endif