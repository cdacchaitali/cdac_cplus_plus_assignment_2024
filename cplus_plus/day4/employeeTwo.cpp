#include <iostream>
using namespace std;

class Employee
{
private: // by default in classes
	int id;
	string name;
	double sal;

public:
	Employee(int = 0);
	Employee(int, const char *, double);
	void acceptDetails(double);
	void dispDetails();
};

int main()
{
	Employee a(10023, "dsfdstgfs", 525435.523);
	a.dispDetails();
}

Employee::Employee(int id) : id(id)
{
}

Employee::Employee(int id, const char *name, double sal)
{
	this->id = id;
	this->name = name;
	this->sal = sal;
}

void Employee::acceptDetails(double sal)
{
	this->sal = sal;
	cout << "Enter Name :";
	cin >> name;
}

void Employee::dispDetails()
{
	cout << "ID = " << id << "\t Name = " << name << " Salary =" << sal << endl;
}
