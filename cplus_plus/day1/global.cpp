#include <iostream>
using namespace std;

int Var = 100;
void fun();

int main()
{
	int gVar = 200;
	cout<<"Global variable..."<<Var<<"\tLocal Variable :"<<gVar<<endl;
	fun();
}

void fun()
{
	cout<<"In fun()\n";
}
