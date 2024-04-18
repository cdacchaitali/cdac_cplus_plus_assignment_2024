#include <iostream>
using namespace std;

struct Employee
{
	int id;
	char name[100];
	double salary;
};

Employee acceptDetails();
void printDetails(Employee);

int main()
{
	Employee E[5];
	for (int i = 0; i < 5; i++)
		E[i] = acceptDetails();
	for (int i = 0; i < 5; i++)
		printDetails(E[i]);
	return 0;
}

Employee acceptDetails()
{
	Employee E;
	cout << "Enter the Employee id" << endl;
	cin >> E.id;
	cin.ignore();
	cout << "Enter the Employee name" << endl;
	cin >> E.name;
	cout << "Enter the Employee salary" << endl;
	cin >> E.salary;
	return E;
}

void printDetails(Employee E)
{
	cout << "Details...." << endl;
	cout << "ID  " << E.id << "\tName  " << E.name << "\tSalary  " << fixed << E.salary << endl;
}
