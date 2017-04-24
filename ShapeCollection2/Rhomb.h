#pragma once
#include "Shape.h"
#include <cmath>

class Rhomb : public Shape {
	int w, h;
public:
	Rhomb(int x_, int y_, int w_, int h_) : Shape(x_, y_), w(w_), h(h_) {}

	double area() const override
	{
		return 2 * w * h;
	}

	double perimeter() const override
	{
		return 4 * sqrt(w * w + h * h);
	}
};
