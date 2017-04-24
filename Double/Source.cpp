#include <iostream>

using namespace std;

void main()
{	char a[8];
	auto p = (double *)a;
	cin >> *p;
	
	int a1 = a[0] << 24 | a[1] << 16 | a[2] << 8 | a[3];
	int a2 = a[4] << 24 | a[5] << 16 | a[6] << 8 | a[7];
	cout << a1 << endl;
	cout << a2 << endl;
}