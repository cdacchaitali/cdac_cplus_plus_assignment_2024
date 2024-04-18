#include <iostream>
#include <string>
using namespace std;

void fun();
void fun(int);
void fun(double);
void fun(const char *);
void fun(string);
void fun(float);
void fun(char);
void fun(char *);
void fun(int, int);
void fun(double, double);
void fun(int, double);
void fun(double, int);

int main()
{
	fun();
	fun(10);
	fun(123.345);
	fun("Chaitali");
	fun("Divya");
	fun(2143.4434f);
	fun('S');
	char str[] = "some thing we have to print";
	fun(str);
	fun(20, 30);
	fun(456.78, 987.32);
	fun(40, 342.53);
	fun(234.325, 35);
}

void fun()
{
	cout << "void fun()" << endl;
}

void fun(int)
{
	cout << "void fun(int)" << endl;
}

void fun(double)
{
	cout << "void fun(double)" << endl;
}

void fun(const char *str)
{
	cout << "void fun(char *)" << endl;
	cout << "Printing..." << str << endl;
}

void fun(string)
{
	cout << "void fun(string)" << endl;
}

void fun(float)
{
	cout << "void fun(float)" << endl;
}

void fun(char)
{
	cout << "void fun(char)" << endl;
}

void fun(char *str)
{
	cout << "void fun(char *str)" << endl;
	str[0] = 'Y';
	cout << "Printing....." << str << endl;
}

void fun(int, int)
{
	cout << "void fun(int,int)" << endl;
}

void fun(double, double)
{
	cout << "void fun(double,double)" << endl;
}

void fun(int, double)
{
	cout << "void fun(int,double)" << endl;
}

void fun(double, int)
{
	cout << "void fun(double,int)" << endl;
}
