#include <iostream>
#ifndef SIZE
#define SIZE 10
#endif
using namespace std;

class array
{
	int arr[SIZE];
	int size;

public:
	void initializeArr();
	void fillArray(int);
	void printArray();
};

int main()
{
	array obj;
	obj.initializeArr();
	obj.fillArray(1001);
	obj.printArray();
}

void array::initializeArr()
{
	cout << "Enter size: (less than " << SIZE << "): ";
	cin >> size;
	if (size > SIZE)
		size = SIZE;
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
