#include <iostream>
#include "Tree.h"

using namespace std;

void main()
{
	Tree* t = nullptr;
	add(t, 7);
	add(t, 1);
	add(t, 9);
	add(t, 2);

	print(t);	cout << endl;
	try
	{
		find_even(t);
	}
	catch (bool result)
	{
		cout << result << endl;
	}
}