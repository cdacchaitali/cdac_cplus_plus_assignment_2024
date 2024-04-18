#include <iostream>

using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x) {}
	friend ostream &operator<<(ostream &, Test &obj);
	friend Test operator*(Test &lhs, Test &rhs);
	friend Test &operator-(Test &);
	friend Test &operator++(Test &);
	friend Test operator++(Test &, int);
};

ostream &operator<<(ostream &out, Test &obj)
{
	out << "data: " << obj.data;
	return out;
}

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
	operator<<(cout, a).operator<<(endl);
	cout << b << endl;
	cout << c << endl;
	cout << -c << endl;
	cout << ++b << endl;
	d = ++a;
	cout << a << endl;
	cout << d << endl;
	e = b++;
	cout << b << endl;
	cout << e << endl;
}
