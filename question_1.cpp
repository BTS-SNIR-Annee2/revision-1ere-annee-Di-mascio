#include <iostream>

int main()
{
	int a = 15;
	int b = 51;
	int temp;
	std::cout << a << std::endl << b << std::endl;
	temp = a;
	a = b;
	b = temp;
	std::cout << a << std::endl << b;
}