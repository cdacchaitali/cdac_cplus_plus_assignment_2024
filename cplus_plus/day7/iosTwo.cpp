// Iostream using character by user with cin.get so space also considered
#include <iostream>
using namespace std;

int main()
{
	char ch;
	while (cin.get(ch))
		cout << ch;
}
