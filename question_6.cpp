#include <iostream>

using namespace std;

int main()
{
	int nb= 0;

	cout << "veuillez choisir un nombre ?" << endl;
	cin >> nb;

	if(nb>=0)
	{
		cout << nb << " est positif" << endl;
	}
	else{
		cout << nb << " est negatif" <<endl;
	}
}