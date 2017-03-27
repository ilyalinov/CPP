#include <iostream>

using namespace std;

class Rational
{
	int num;
	int den;

public:
	Rational(int num_, int den_) : num(num_), den(den_) {}

	operator double() const
	{
		return double(num) / double(den);
	}
};

void main()
{
	auto r = Rational(2, 3);
	double x = r;
	cout << r;
}

