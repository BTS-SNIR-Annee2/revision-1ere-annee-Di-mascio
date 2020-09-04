#include <iostream>

int main()
{
	int a = 15;
	int b = 51;
	int c = 105;
	int temp;//105
	std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl;
	temp = c;
	c = a;		//c=15
	a = b;		//a=51
	b = temp;
	std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl;
}