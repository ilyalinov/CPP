#pragma once
#include <limits>

class numeric_limits
{
public:
	template <class T>
	static T max();
};

template<>
int numeric_limits::max<int>()
{
	return INT_MAX;
}

template<>
long int numeric_limits::max<long int>()
{
	return LONG_MAX;
}

template<>
double numeric_limits::max<double>()
{
	return DBL_MAX;
}