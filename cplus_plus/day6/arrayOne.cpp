#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size: ";
	cin >> size;
	int *arr = new int[size];
	for (int cnt = 0; cnt < size; cnt++)
		arr[cnt] = 100 + cnt;
	cout << "arr: ";
	for (int cnt = 0; cnt < size; cnt++)
		cout << arr[cnt] << "  ";
	cout << endl;
	delete[] arr;
}
