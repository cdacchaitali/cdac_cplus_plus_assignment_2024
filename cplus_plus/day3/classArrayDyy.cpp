#include <iostream>
using namespace std;

class array
{
	int *arr; // a pointer variable
	const int size;

public:
	array(int = 0);
	array(int sz, int first);
	~array();
	void fillArray(int first);
	void printArray();
};

int main()
{
	array obj = 10;
	obj.fillArray(1001);
	obj.printArray();

	array obj2(20);
	obj2.fillArray(2001);
	obj2.printArray();

	array obj3(30, 3001);
	obj3.printArray();
}

array::array(int sz) : size(sz)
{
	arr = new int[sz];
	cout << "size" << sz;
}

array::array(int sz, int first) : size(sz)
{
	arr = new int[sz];
	for (auto cnt = 0; cnt < sz; cnt++)
		arr[cnt] = first + cnt;
	cout << "size" << sz;
}

array::~array()
{
	delete[] arr;
}

void array::fillArray(int first)
{
	for (auto cnt = 0; cnt < size; cnt++)
		arr[cnt] = first + cnt;
	cout << "size" << size;
}

void array::printArray()
{
	cout << "Array : ";
	for (auto cnt = 0; cnt < size; cnt++)
		cout << arr[cnt] << "  ";
	cout << "size" << size;
	cout << endl;
}
