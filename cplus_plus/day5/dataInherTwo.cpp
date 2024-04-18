#include <iostream>
using namespace std;

class Base
{
	int bData;

public:
	void fun() {}

	void funOne() {}
};

class Derived : public Base
{
	int dData;

public:
	void fun() {}
	void funTwo() {}
};

int main()
{
	cout << "Base: " << sizeof(Base) << endl;
	cout << "Derived: " << sizeof(Derived) << endl;
}
