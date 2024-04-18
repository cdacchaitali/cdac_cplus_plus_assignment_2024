#include <iostream>
using namespace std;

struct Employee
{
	int id;
	char name[100];
	double salary;
};

void acceptDetails(Employee &); // Call by reference
void printDetails(Employee);	// call by value

int main()
{
	Employee E[5];
	int cnt = 5;
	for (int i = 0; i < 5; i++)
		acceptDetails(E[i]);
	for (int i = 0; i < 5; i++)
		printDetails(E[i]);
	return 0;
}

void acceptDetails(Employee &E)
{
	cout << "Enter the Employee id" << endl;
	cin >> E.id;
	cin.ignore();
	cout << "Enter the Employee name" << endl;
	cin >> E.name;
	cout << "Enter the Employee salary" << endl;
	cin >> E.salary;
}

void printDetails(Employee E)
{
	cout << "Details...." << endl;
	cout << "ID  " << E.id << "\tName  " << E.name << "\tSalary  " << fixed << E.salary << endl;
}
