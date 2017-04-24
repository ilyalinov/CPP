#pragma once
#include "Shape.h"
#include "ShapeCollection.h"
#include "Rhomb.h"
#include "Square.h"

#include <memory>
#include <iostream>

using namespace std;

void main()
{
	ShapeCollection coll;
	unique_ptr<Shape> p1(new Square(1, 2, 3));
	coll.add(p1);
	unique_ptr<Shape> p2(new Rhomb(10, 10, 2, 3));
	coll.add(p2);

	cout << coll.area() << endl;;
}