#include <iostream>

using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x) {}
	friend Test operator+(Test &lhs, Test &rhs);
};

Test operator+(Test &lhs, Test &rhs)
{
	Test temp;
	temp.data = lhs.data + rhs.data;
	return temp;
}

int main()
{
	Test a = 100;
	Test b = 50;
	Test c = a + b;
}
