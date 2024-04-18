
// Template using class with operator (Implicit call)

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
	fun("Chaitali Dinkar Ahire");
	Test tobj(100);
	fun(tobj);
}
