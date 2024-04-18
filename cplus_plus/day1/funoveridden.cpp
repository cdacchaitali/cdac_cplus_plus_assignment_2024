#include <iostream>
using namespace std;

class Mine
{
public:
	void Print()
	{
		cout << "Mine::Print(Parent)" << endl;
	}
};

class Yours : public Mine
{
public:
	void Print()
	{
		cout << "Yours::Print(Child)" << endl;
	}
	void Print2()
	{
		cout << "Parent Class" << endl;
		Mine::Print();
	}
};

int main()
{
	Yours y;
	y.Print2();
	y.Print();
	Mine *ptr = &y;
	ptr->Print();
}
