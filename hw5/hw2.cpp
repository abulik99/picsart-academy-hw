#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int n = 1;
	if (*(char*)&n = 1) // using char take first byte at memory adress of n if it is 1(ascii code) then the first least important byte comes first so little endian
	{
		cout << "little endian";
	}
	else // otherwise big endian
	{
		cout << "big endian";
	}
	return 0;
}