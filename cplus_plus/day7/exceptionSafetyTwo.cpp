
// Throw & catch exception calling through pointer constructor & destructor with recursion

#include <iostream>
using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x)
	{
		cout << "Test(" << x << ")" << endl;
	}
	~Test()
	{
		cout << "~Test()" << endl;
	}
};

void recurr(int num)
{
	Test *ptr = new Test(num);
	if (num <= 5)
	{
		cout << num << "  ";
		recurr(num + 1);
		cout << num << " ";
	}
	delete ptr;
	throw num;
}

int main()
{
	try
	{
		recurr(1);
	}
	catch (int x)
	{
		cout << "Caught" << x << endl;
	}
}
