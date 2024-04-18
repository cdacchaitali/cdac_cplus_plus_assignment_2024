#include <iostream>
using namespace std;

class B
{
public:
	virtual void fun()
	{
		cout << "B::fun()" << endl;
	}
	virtual void funOne()
	{
		cout << "B::funOne()" << endl;
	}
	virtual void funTwo()
	{
		cout << "B::funTwo()" << endl;
	}
};

class D : public B
{
public:
	void fun()
	{
		cout << "D::fun()" << endl;
	}
	void funTwo()
	{
		cout << "D::funTwo()" << endl;
	}
};

typedef void (*FPTR)();

void funcaller(B &b)
{
	long *vptr = (long *)(&b);
	FPTR *vbtl = (FPTR *)(*vptr);
	vbtl[0]();
	vbtl[1]();
	vbtl[2]();
	cout << "-----------------------------------------------------------------------" << endl;
}

int main()
{
	B b;
	D d;
	funcaller(b);
	funcaller(d);
}
