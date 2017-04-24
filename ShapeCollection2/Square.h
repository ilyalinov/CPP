#pragma once
#include "Shape.h"

class Square : public Shape {
	int size;
public:
	Square(int x_, int y_, int size_) : Shape(x_, y_), size(size_) {}

	double area() const override
	{
		return size*size;
	}

	double perimeter() const override
	{
		return 4 * size;
	}
};