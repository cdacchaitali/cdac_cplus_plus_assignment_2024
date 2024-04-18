#include <iostream>
using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x) {}
	void print()
	{
		cout << "data: " << data << endl;
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
	//       temp.data = lhs.data;
	lhs.data++;
	return temp;
}

int main()
{
	Test a = 100;
	Test b = 50;
	Test c = a * b;
	Test d, e;
	a.print();
	b.print();
	c.print();
	(-c).print();
	(++b).print();
	d = ++a;
	a.print();
	d.print();
	e = b++;
	b.print();
	e.print();
}
