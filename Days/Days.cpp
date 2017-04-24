#include "Days.h"

using namespace std;

string holiday(pair<int, int>& p)
{
	string s;
	switch (p.first, p.second)
	{
		case (1, 1) :
			s = "New Year";
			break;
		case (8, 3) :
			s = "International Women's Day";
			break;
		case (1, 5) :
			s = "International worker's Day";
			break;
		default:
			s = "Unknown holiday";
			break;
	}

	return s;
}