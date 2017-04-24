#include <iostream>
#include <vector>

using namespace std;

template <class T>
typename T::value_type average(T& xs)
{
	typename T::value_type res = 0;
	for (auto it = xs.begin(); it != xs.end(); it++)
	{
		res += *it;
	}

	res /= xs.size();
	return res;
}

template <class T>
auto average1(T& xs)
{
	decltype(*xs.begin() + 0) res = 0;
	for (auto it = xs.begin(); it != xs.end(); it++)
	{
		res += *it;
	}

	res /= xs.size();
	return res;
}

void main()
{
	vector<int> v1(10, 1);
	vector<double> v2(5, 2.7);
	cout << average(v1) << endl;
	cout << average(v2) << endl;
	cout << average1(v1) << endl;
	cout << average1(v2) << endl;
}