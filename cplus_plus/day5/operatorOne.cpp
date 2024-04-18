#include <iostream>

using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x) {}
	void print(ostream &out)
	{
		out << "data: " << data << endl;
	}
	friend Test operator*(Test &lhs, Test &rhs);
	friend Test &operator-(Test &);
	friend Test &operator++(Test &);
	friend Test operator++(Test &, int);
};

Test operator*(Test &lhs, Test &rhs)
{
	Test temp;
	temp.data = lhs.data * rhs.data;
	return temp;
}
Test &operator-(Test &lhs)
{
	lhs.data = -lhs.data;
	return lhs;
}
Test &operator++(Test &lhs)
{
	lhs.data = ++lhs.data;
	return lhs;
}
Test operator++(Test &lhs, int)
{
	Test temp(lhs);

	lhs.data++;
	return temp;
}

int main()
{
	Test a = 100;
	Test b = 50;
	Test c = a * b;
	Test d, e;
	a.print(cout);
	b.print(cout);
	c.print(cout);
	(-c).print(cout);
	(++b).print(cout);
	d = ++a;
	a.print(cout);
	d.print(cout);
	e = b++;
	b.print(cout);
	e.print(cout);
}
