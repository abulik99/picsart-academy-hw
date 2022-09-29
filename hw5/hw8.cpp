#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void hex_cout(int num)
{
	cout << std::hex << num;
}
int main()
{
	int num;
	cin >> num;
	hex_cout(num);
	return 0;
}