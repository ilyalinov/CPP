#include <iostream>
#include "Tree.h"

using namespace std;

void main()
{
	Tree* t = nullptr;
	add(t, 7);
	add(t, 1);
	add(t, 9);
	add(t, 11);
	add(t, 13);

	print(t);
	cout << endl;

	try
	{
		cout << find_even(t) << endl;
	}
	catch (bool result)
	{
		cout << result << endl;
	}
}