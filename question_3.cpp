#include <iostream>

int main()
{
	int a;
	std::cout << "veuillez entrée un nombre : ";
	std::cin >> a;
	std::cout << "vous avez entrée : " << a << std::endl;
	a = a*a;
	std::cout << "votre nombre au carré est " << a << std::endl;
}