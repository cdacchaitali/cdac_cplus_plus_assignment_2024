#include <iostream>
using namespace std;

class Simple
{
	int data;
	void getData(int x = 10)
	{
		data = x;
	}
	void printData()
	{
		cout << "Data: " << data << endl;
	}
	friend class SimpleOne;
};

class SimpleOne
{
	int dataOne;
	Simple s;

public:
	void getDataOne()
	{
		s.getData(100);
	}
	void printDataOne()
	{
		s.printData();
	}
};

int main()
{
	SimpleOne obj;
	obj.getDataOne();
	obj.printDataOne();
}
