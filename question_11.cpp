#include <iostream>

using namespace std;

int main()
{
	int nb = 0;
	int nb2;
	cout << "veuillez choisir un nombre." << endl;
	cin >> nb;
	nb2 = nb+10;
	while(nb<=nb2)
	{
		cout << nb << endl;
		nb = nb+1;
	}
}