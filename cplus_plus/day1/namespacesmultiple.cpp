#include <iostream>
using namespace std;

namespace Mine
{
	int gVar = 100;
	void fun();
}

namespace Yours
{
	int gVar = 130;
	void fun();
}

int main()
{
	int gVar = 200;
	cout << "Local Variable :" << gVar << endl;
	cout << "Mine::gVar " << Mine::gVar << endl;
	cout << "Yours::gVar " << Yours::gVar << endl;
	Mine::fun();
	Yours::fun();
}

void Mine::fun()
{
	cout << "In Mine::fun()\n";
}

void Yours::fun()
{
	cout << "In Yours::fun()\n";
}
