#include <iostream>
using namespace std;

class Array
{
	int *arr;

public:
	Array();
	~Array();
	void print();
};

int main()
{
	Array a;
	a.print();
}

Array::Array()
{

	arr = new int[25];
	for (int i = 0; i < 15; i++)
	{
		arr[i] = 1001 + i;
	}
}
Array::~Array()
{
	delete[] arr;
}

void Array::print()
{
	cout << "Arary....";
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";
}
