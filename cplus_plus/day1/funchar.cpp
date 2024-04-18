#include <iostream>

using namespace std;

void fun(char);
void fun(char *);
void fun(const char *);
void fun(string);

int main()
{
	fun('w');
	char str[] = "Chaitai Ahire";
	fun(str);
	fun("Ranjana");
	fun("Divya");
}

void fun(char st)
{
	cout << "void fun(char)..." << st << endl;
}

void fun(char *str)
{
	cout << "void fun(char *)...." << str << endl;
	str[0] = 'a';
	cout << "Modified void fun(char *)..." << str << endl;
}

void fun(const char *std)
{
	cout << "void fun(const char *)...." << std << endl;
}

void fun(string stl)
{
	cout << "void fun(string)......" << stl << endl;
}
