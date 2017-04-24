#include <iostream>
#include <vector>

using namespace std;

void main()
{
	int n = 0;
	vector<int> v;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		v.push_back(n);
	}

	auto it = v.end();
	while (it != v.begin())
	{
		it--;
		cout << *it << " ";
	}
}