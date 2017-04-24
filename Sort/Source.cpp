#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDigits(int n)
{
	int temp = n;
	int res = 0;
	while (temp != 0)
	{
		res += temp % 10;
		temp = temp / 10;
	}

	return res;
}

void main()
{
	int n = 0;
	vector<int> v;
	for (;;)
	{
		cin >> n;

		if (n == 0)
		{
			break;
		}

		v.push_back(n);
	}

	sort(v.begin(), v.end(), [](int a, int b) { return sumOfDigits(a) < sumOfDigits(b); });

	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}