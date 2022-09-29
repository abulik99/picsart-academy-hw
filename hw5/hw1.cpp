#include <iostream>
using std::cout;
using std::cin;

int main()
{
	float f;
	cin >> f;
	int* x;
	x = (int*)&f;
	cout << *x;
	return 0;
}