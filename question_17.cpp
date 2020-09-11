#include <iostream>

using namespace std;

int main()
{
	int nbTab = 1;
	
	cout << "entre le nombre de note total : ";
	cin >> nbTab;
	
	int note[nbTab];

	for (int i = 0; i < nbTab; ++i)
	{
		cout << "entree la note " << i << " : ";
		cin >> note[i];
	}
}