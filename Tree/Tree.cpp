#include <iostream>

using namespace std;

struct Tree
{
	int val;
	Tree* left;
	Tree* right;
	Tree(int v) :
		val(v), 
		left(nullptr),
		right(nullptr)
	{}	
};

void add(Tree* & p, int v)
{
	if (p == nullptr)
		p = new Tree(v);
	else if (v < p->val)
	{
		add(p->left, v);
	}
	else
	{
		add(p->right, v);
	}
}

void print(const Tree* p)
{
	if (p != nullptr)
	{
		print(p->left);
		cout << p->val << " ";
		print(p->right);
	}
}

bool find_even(const Tree* p)
{
	if (p != nullptr)
	{
		if (p->val % 2 == 0)
		{
			throw true;
		}
		else
		{
			return (find_even(p->left) || find_even(p->right));
		}
	}

	return false;
}
