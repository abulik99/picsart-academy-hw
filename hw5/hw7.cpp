#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void binary_cout(unsigned int num)
{
	unsigned int u=0;
	do
	{
		u = (u << 1) ^ (num & 1);
		num >>= 1;
	} while (num);
	do
	{
		cout << (u & 1);
		u >>= 1;
	} while (u);
}
int main()
{
	int num;
	cin >> num;
	binary_cout(*((unsigned int*)&num));
	return 0;
}