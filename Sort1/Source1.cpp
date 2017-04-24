#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lastDigits(int x, int n)
{
	int res = 0;
	int pow = 1;
	int temp = x;
	for (int i = 0; i < n; i++)
	{
		res += (temp % 10) * pow;
		pow *= 10;
		temp = temp / 10;
	}

	return res;
}

void sort1(int n, vector<int>& v)
{
	sort(v.begin(), v.end(), [n] (int a, int b) { return lastDigits(a, n) < lastDigits(b, n); });
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

	sort1(2, v);

	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}