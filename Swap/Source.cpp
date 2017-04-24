#include <iostream>

template <typename T>
void swp(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

void main()
{
	int x = 1;
	int y = 0;
	swp(x, y);
	std::cout << x << " " << y << std::endl;
	double a = 1.1;
	double b = 0.1;
	swp(a, b);
	std::cout << a << " " << b << std::endl;
}