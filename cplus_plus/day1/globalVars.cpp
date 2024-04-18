#include <iostream>
using namespace std;

int gVar = 100;
void fun();

int main()
{
	cout<<"Global variable..."<<gVar<<endl;
	fun();
}

void fun()
{
	cout<<"In fun()\n";
}
