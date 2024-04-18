#include <iostream>
using namespace std;
// Call by refernce

void change(int &);

int main()
{
	int var = 10;
	cout << "Before Var: " << var << endl;
	cout << "Address Var: " << &var << endl;
	change(var);
	cout << "After Var: " << var << endl;
}

void change(int &xVar)
{
	xVar += 20;
}
