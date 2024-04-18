#include <iostream>
using namespace std;

int main()
{
	string str;
	char strd[100];
	getline(cin, str);
	cin.get(strd, 100);
	cout << "Printing String......." << str << endl;
	cout << "Printing Char........." << strd << endl;
}
