#include <iostream>
using namespace std;

class array
{
	int *arr; // a pointer variable
	const int size;

public:
	array(int = 0);
	array(int sz, int first);
	array(const array &);
	~array();
	void fillArray(int first);
	void printArray();
};

int main()
{
	array obj = 10;
	obj.fillArray(1001);
	obj.printArray();
	{
		array b = obj;
		b.printArray();
	}
	cout << "After deletion.." << endl;
	obj.printArray();
}

array::array(const array &rhsobj) : size(rhsobj.size)
{
	if (size > 0)
	{
		arr = new int[size];
		for (int cnt = 0; cnt < size; ++cnt)
			arr[cnt] = rhsobj.arr[cnt];
	}
	else
		arr = nullptr;
}
array::array(int sz) : size(sz)
{
	arr = new int[size];
	cout << "size" << size;
}

array::array(int sz, int first) : size(sz)
{
	arr = new int[size];
	for (auto cnt = 0; cnt < size; cnt++)
		arr[cnt] = first + cnt;
	cout << "size" << size;
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
