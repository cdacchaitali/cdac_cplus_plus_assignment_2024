#include <iostream>
using namespace std;

class Employee
{
private: // by default in classes
	const int id;
	string name;
	double sal;

public:
	Employee(int = 0);
	Employee(int, const char *, double);
	void acceptDetails();
	void dispDetails();
};

int main()
{
	Employee a(1001, "Chaitali", 41344.241);
	a.dispDetails();

	Employee a1(1002);
	a1.acceptDetails();
	a1.dispDetails();
}

Employee::Employee(int var) : id(var)
{
}

Employee::Employee(int var, const char *nm, double sl) : id(var), name(nm), sal(sl)
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
