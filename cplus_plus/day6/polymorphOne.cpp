#include <iostream>
using namespace std;

class B
{
public:
	void fun()
	{
		cout << "B::fun()" << endl;
	}
};

class D
{
public:
	void fun()
	{
		cout << "D::fun()" << endl;
	}
};

int main()
{

	B b;
	b.fun();
	D d;
	d.fun();
}
