#include "Shape.h"
#include "ShapeCollection.h"
#include "Rhomb.h"
#include "Square.h"

#include <iostream>

using namespace std;

void main()
{
	ShapeCollection coll;
	coll.add(new Square(1, 2, 3));
	coll.add(new Rhomb(10, 10, 2, 3));

	cout << coll.area() << endl;
	cout << coll.hasSquare() << endl;
}