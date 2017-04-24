#include <functional>
#include <iostream>

using namespace std;

double integral(double a, double b,	function<double (double)> f)
{
	const int n = 10000;
	const double h = (b - a) / n;
	double p = a;
	double res = 0;
	for (int i = 0; i < n; i++)
	{
		res += (f(p) + f(p + h) / 2) * h;
		p = p + h;
	}

	return res;
}

void main()
{
	cout << (integral(0, 1, [] (double x) -> double { return x * x; }));
}