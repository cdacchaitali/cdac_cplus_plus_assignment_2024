#include <iostream>
using namespace std;

class B
{
public:
	virtual void fun()
	{
		cout << "B::fun()" << endl;
	}
};

class D : public B
{
public:
	void fun()
	{
		cout << "D::fun()" << endl;
	}
};

int main()
{

	B b, *bPtr;
	D d;
	bPtr = &b;
	bPtr->fun();
	bPtr = &d;
	bPtr->fun();
}
