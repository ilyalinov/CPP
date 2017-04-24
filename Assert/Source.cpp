#include <iostream>

using namespace std;

#define ASSERT(false) (cout << "error" << endl) 

void main()
{
	int y = -1;
	ASSERT(y > 0);
}