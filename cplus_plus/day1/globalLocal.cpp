#include <iostream>
using namespace std;

int gVar = 100;
void fun();

int main()
{
	int gVar = 200;
	cout<<"Global variable..."<<::gVar<<"\tLocal Variable :"<<gVar<<endl;
	fun();
}

void fun()
{
	cout<<"In fun()\n";
}
