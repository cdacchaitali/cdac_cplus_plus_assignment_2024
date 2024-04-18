// Abstract : Exception scenerio with exception library

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
	int num;
	string mesg;

public:
	MyException(int errNo, const char *msg) : num(errNo), mesg(msg)
	{
	}
	void what()
	{
		cout << "num: " << num << "Type: " << mesg << endl;
	}
};

int main()
{
	try
	{
		cout << "Statement #1" << endl;
		throw MyException(404, "Resource NOT available");
		cout << "Statement #2" << endl;
	}
	catch (MyException &eobj)
	{
		eobj.what();
	}
	catch (exception &eobj)
	{
		eobj.what();
	}
	cout << "Statement #3" << endl;
}
