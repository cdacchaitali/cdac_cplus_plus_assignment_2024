#include <iostream>
using namespace std;

void fun()
{

	int &&rValRef = 10;
	int Integer = rValRef;

	cout << "Integer is: " << Integer << endl;
}

int main()
{
	fun();
}
