#pragma once
#include "Shape.h"
#include "Square.h"
#include <vector>
#include <iostream>

using namespace std;

class ShapeCollection
{
	vector<Shape*> v;

public:
	ShapeCollection() {}

	ShapeCollection& operator=(const ShapeCollection& from) = delete;

	ShapeCollection(const ShapeCollection& from) = delete;

	void add(Shape* shape)
	{
		v.push_back(shape);
	}

	void remove_last()
	{
		delete v[size(v) - 1];
		v.pop_back();
	}

	double area() const
	{
		double temp = 0;
		for (auto e : v)
		{
			temp += e->area();
		}

		return temp;
	}

	bool hasSquare()
	{
		for (auto e : v)
		{
			auto p = dynamic_cast<Square*>(e);
			if (p != nullptr)
			{
				return true;
			}

			return false;
		}
	}

	~ShapeCollection()
	{
		for (auto e : v)
		{
			delete e;
		}
	}
};
