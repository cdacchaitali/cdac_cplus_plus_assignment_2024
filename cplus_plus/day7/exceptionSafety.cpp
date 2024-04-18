// Throw & catch exception calling constructor & destructor
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

int main()
{
	try
	{
		cout << "Statement #1" << endl;
		Test obj;
		throw 10;
		cout << "Statement #2" << endl;
	}
	catch (int x)
	{
		cout << "Caught" << x << endl;
	}
	cout << "Statement #3" << endl;
}
