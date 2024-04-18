#include <iostream>
#ifndef SIZE
#define SIZE 100
#endif

using namespace std;

class array
{
	int arr[SIZE];
	const int size;

public:
	array(int = 10);
	array(int, int);
	void fillArray(int);
	void printArray();
};

int main()
{
	array obj;
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
}

array::array(int sz, int first) : size(sz)
{

	fillArray(first);
}

void array::fillArray(int first)
{
	for (auto cnt = 0; cnt < size; cnt++)
		arr[cnt] = first + cnt;
}

void array::printArray()
{
	for (auto cnt = 0; cnt < size; cnt++)
		cout << arr[cnt] << "  ";
	cout << endl;
}
