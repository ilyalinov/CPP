#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Queue
{
	vector<T> v;

public:
	Queue() {};

	void push(T x)
	{
		v.insert(v.begin(), x);
	}

	T pop()
	{
		if (v.size() > 0)
		{
			T temp = *v.begin();
			v.erase(v.begin());
			return temp;
		}
		else
		{
			const string s = "vector is empty";
			throw s;
		}
	}

	~Queue() {};
};

void main()
{
	auto q = Queue<double>();

	q.push(2.0);
	q.push(1.5);

	for (;;)
	{
		try
		{
			cout << q.pop() << endl;
		}
		catch (string s)
		{
			cout << "Exception: " << s << endl;
			break;
		}
	}
}