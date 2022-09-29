#include <iostream>
using std::cout;
using std::cin;
bool* arr;
int sieve(int a) //sieve of eratosthenes till a on arr
{
	
	for (int i = 2; i < a; i++)
	{
		for (int j = 2; j * i <= a; j++)
		{
			arr[j * i] = true;
		}
	}

	return 1;
}
bool is_prime_sum(int num)
{
	arr = new bool[num] {};// allocate bool array of size num with false as initial value
	sieve(num);
	for (int i = 2; i <= num / 2; i++)
		if (!arr[i] && !arr[num - i]) // if i and num-i are prime
			return true;
	return false;
}
int main()
{
	int num;
	cin >> num;
	cout << is_prime_sum(num);
	return 0;
}