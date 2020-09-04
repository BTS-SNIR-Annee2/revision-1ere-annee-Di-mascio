#include <iostream>

int main()
{
	std::string nom;
	std::cout << "Machine : Quesl est votre nom ?" << std::endl;
	std::cout << "Utilisateur : ";
	std::cin >> nom;
	std::cout << "Machine dit de manière charmante : Bonjour, " << nom << "!" << std::endl;
}