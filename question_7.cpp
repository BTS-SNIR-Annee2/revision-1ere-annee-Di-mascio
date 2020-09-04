#include <iostream>

using namespace std;

int main()
{
	int nb = 0;
	int nb2 = 0;
	int produit = 0;

	cout << "veuillez choisir un nombre ?" << endl;
	cin >> nb;
	cout << "veuillez choisir un deuxieme nombre ?" << endl;
	cin >> nb2;

	produit = nb*nb2;

	if(produit>=0)
	{
		cout << nb << " x " << nb2 << " = " << produit << endl;
		cout << "le produit de " << nb << " et de " << nb2 <<" est positif" << endl;
	}
	else{
		cout << nb << " x " << nb2 << " = " << produit << endl;
		cout << "le produit de " << nb << " et de " << nb2 <<" est negatif" << endl;
	}
}