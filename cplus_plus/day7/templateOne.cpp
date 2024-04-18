
// Template for using same function but argument of different datatype

#include <iostream>
using namespace std;

template <typename T>
void fun(T var)
{
	cout << "var: " << var << endl;
}

int main()
{
	fun(10); // implicit call
	fun(10.323f);
	fun(10.2321);
	fun('a');
	fun("Chaitali Ahire");
}
