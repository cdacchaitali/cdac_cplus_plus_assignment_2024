#include <iostream>
using namespace std;

class Employee
{
private: // by default in classes
	const int id;
	string name;
	mutable double sal;

public:
	Employee(int = 0);
	Employee(int, const char *, double);
	void acceptDetails();
	void dispDetails() const;
	void dispDetails();
};

int main()
{
	const Employee a(1001, "AAAAD", 41344.241);
	a.dispDetails();

	Employee b(1002);
	b.acceptDetails();
	b.dispDetails();
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

void Employee::dispDetails() const
{
	cout << "const function ID = " << id << "\t Name = " << name << " Salary =" << fixed << sal << endl;
	sal += 10000;
	cout << "Modified const function ID = " << id << "\t Name = " << name << " Salary =" << fixed << sal << endl;
}

void Employee::dispDetails()
{
	cout << "Non const function ID = " << id << "\t Name = " << name << " Salary =" << fixed << sal << endl;
	sal += 10000;
	cout << "Modified Non const function ID = " << id << "\t Name = " << name << " Salary =" << fixed << sal << endl;
}
