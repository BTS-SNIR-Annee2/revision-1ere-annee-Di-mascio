#include <iostream>

using namespace std;

int main()
{
	int nb = 0;
	int tab[20];
	int max;
	int min;
	int memoire;
	for (int i = 0; i < 20; ++i)
	{
		cout << "Entrez le nombre numéro " << i << " : ";
		cin >> tab[i];
		if(i == 0)
		{
			min = tab[0];
			max = tab[0];
		}
		if(max <= tab[i])
		{
			max = tab[i];
			memoire = i;
		}
	}
	cout << "max :" << max << endl;
	cout << "le max etait le numero " << memoire << endl; 
}