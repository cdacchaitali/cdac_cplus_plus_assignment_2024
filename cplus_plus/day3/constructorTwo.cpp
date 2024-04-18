#include <iostream>
using namespace std;

class Test
{
	string name;
	int len;

public:
	void print()
	{
		cout << "Name: " << name << "\tLen: " << len << endl;
	}
	void acceptTest()
	{
		cout << "Enter name and len: ";
		cin >> name >> len;
	}
};

int main()
{
	Test obj;
	string objstr;
	obj.acceptTest();
	obj.print();

	objstr = "Chaitali Dinkar Ahire";
	cout << objstr << endl;
}
