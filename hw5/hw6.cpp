#include <iostream>
using std::cout;
using std::cin;
int digit_count(int num)
{
	int count = 0;
	do 
	{
		num /= 10;
		count++;
	} while (num);
	return count;
}
int main()
{
	int num;
	cin >> num;
	cout << digit_count(num);
	return 0;
}