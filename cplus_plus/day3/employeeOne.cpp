#include <iostream>
using namespace std;

class Employee
{
private: // by default in classes
	const int id;
	string name;
	double sal;

public:
	Employee(int = 10);
	Employee(int, const char *);
	void acceptDetails();
	void dispDetails();
};

int main()
{
	Employee a;
	a.acceptDetails();
	a.dispDetails();

	Employee b(1001);
	b.acceptDetails();
	b.dispDetails();
}

Employee::Employee(int var) : id(var)
{
}

Employee::Employee(int var, const char *nm) : id(var), name(nm)
{
}

void Employee::acceptDetails()
{
	cout << "Enter Name & Salary :";
	cin >> name >> sal;
}

void Employee::dispDetails()
{
	cout << "ID = " << id << "\t Name = " << name << " Salary =" << sal << endl;
}
