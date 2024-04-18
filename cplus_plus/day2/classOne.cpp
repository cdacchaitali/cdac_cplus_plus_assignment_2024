#include <iostream>
using namespace std;

// using class instead of structures in C++

class Employee
{
	int id;
	char name[100];
	double salary;

public:
	void acceptDetails();
	void printDetails();
};

int main()
{
	Employee E[5];
	for (int i = 0; i < 5; i++)
		E[i].acceptDetails();
	for (int i = 0; i < 5; i++)
		E[i].printDetails();
	return 0;
}

void Employee::acceptDetails()
{
	cout << "Enter the Employee id" << endl;
	cin >> id;
	cin.ignore();
	cout << "Enter the Employee name" << endl;
	cin >> name;
	cout << "Enter the Employee salary" << endl;
	cin >> salary;
}

void Employee::printDetails()
{
	cout << "Details...." << endl;
	cout << "ID  " << id << "\tName  " << name << "\tSalary  " << fixed << salary << endl;
}
