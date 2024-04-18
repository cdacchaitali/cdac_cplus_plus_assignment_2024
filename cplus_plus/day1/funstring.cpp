#include <iostream>
using namespace std;

void fun(string *);

int main()
{
	string str = "some fun with the string";
	cout << "string..." << str << endl;
	fun(&str);
}

void fun(string *str)
{
	cout << "void fun(string)" << endl;
	*str = "none";
	cout << "after..." << *str << endl;
	cout << "Printing..." << endl;
}
