#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int power(int num, int exp)
{
	int product = num;
	if (!exp)
	{
		return 1;
	}
	exp--;
	while (exp > 0)
	{
		product *= num;
		exp--;
	}
	return product;
}
int main()
{
	int num, exp;
	cin >> num >> exp;
	cout << power(num, exp);
	return 0;
}