
// Explicit call

#include <iostream>

using namespace std;

class Test
{
	int data;

public:
	Test(int x = 0) : data(x) {}
	friend ostream &operator<<(ostream &out, Test obj)
	{
		out << "Test data: " << obj.data;
		return out;
	}
};

void fun(int var) // specialized
{
	cout << "Int version: " << var << endl;
}

template <typename T>
void fun(T var) // generalized
{
	cout << "var: " << var << endl;
}

int main()
{
	fun(10);
	fun(10.323f);		  // implicit call
	fun<double>(10.2321); // explicit call
	fun('a');
	fun("Chaitali Ahire");
	fun(Test(123));
}
