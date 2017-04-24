#pragma once
class Shape {
protected:
	int x, y;
public:
	Shape(int x_, int y_) : x(x_), y(y_) {}

	virtual double area() const = 0;

	virtual double perimeter() const = 0;

	virtual ~Shape() {}
};
