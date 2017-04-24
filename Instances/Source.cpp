#include <iostream>

class Abc
{
	static int i;

public:
	static int instances();
	
	Abc();

	~Abc();
};

Abc::Abc()
{
	i++;
}

Abc::~Abc()
{
	i--;
}

int Abc::instances()
{
	return i;
}

int Abc::i = 0;

void main()
{
	Abc* x = new Abc();
	Abc y;
	Abc z;
	delete x;
	std::cout << Abc::instances() << std::endl;
}