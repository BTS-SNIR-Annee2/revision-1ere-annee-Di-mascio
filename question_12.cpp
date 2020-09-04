#include <iostream>

using namespace std;

int main()
{
	int nb = 0;
	int nb2 = 0;
	cout << "veuillez choisir un nombre." << endl;
	cin >> nb;
	nb2 = nb+10;
	for (int i = 0; i < nb2; ++i)
	{
		cout << nb << endl;
		nb = nb+1;
	}
}