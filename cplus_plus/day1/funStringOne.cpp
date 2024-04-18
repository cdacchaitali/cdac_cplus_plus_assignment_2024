#include <iostream>
using namespace std;

void funONe(string &st)
{
	cout << "In funONe...." << st << endl;
	st = "OH My GOd";
	cout << "In funONe..MP.." << st << endl;
}

int main()
{
	char str[] = "testing some strings here";
	string st = "I love my india";
	funONe(st);
	return 0;
}
