#include <iostream>
using std::cout;
using std::cin;
int prime_chk(int a) //returns 1 for prime; 2 for composite; 0 for anyhting else
{
	if (a <= 1)
		return 0;
	else
		for (int i = 2; i * i <= a; i++)
			if (!(a % i))
				return 2;
	return 1;
}
int main()
{

	cout << prime_chk(10);
	return 0;
}