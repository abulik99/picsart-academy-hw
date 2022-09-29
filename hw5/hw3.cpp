#include <iostream>
using std::cout;
using std::cin;
int distance(int a, int b)
{
	if (a > b)
		return a - b;
	else
		return b - a;
}
int main()
{

	cout << distance(5, 6);
	return 0;
}