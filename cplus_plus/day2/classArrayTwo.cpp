#include <iostream>
using namespace std;
#ifndef SIZE
#define SIZE 40
#endif

class Array
{
	int arr[SIZE];
	int size;

public:
	Array();
	Array(int);
	void fillArray(int first);
	void printArray();
};

int main()
{
	Array a;
	a.fillArray(101);
	a.printArray();
	Array b = a;
	b.printArray();
	Array c = 15;
	c.fillArray(100001);
	c.printArray();
}

Array::Array()
{
	cout << "Enter size: (less than " << SIZE << "): ";
	cin >> size;
	if (size > SIZE)
		size = SIZE;
}

Array::Array(int sz)
{
	size = sz;
	if (size > SIZE)
		size = SIZE;
}

void Array::fillArray(int first)
{
	for (auto i = 0; i < size; ++i)
	{
		arr[i] = i + first;
	}
}

void Array::printArray()
{
	cout << "Arr: ";
	for (auto i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
