#include <iostream>

using namespace std;

int main()
{
	int nbTab = 1;
	int moy = 0;
	
	cout << "entre le nombre de note total : ";
	cin >> nbTab;
	
	int note[nbTab];

	for (int i = 0; i < nbTab; ++i)
	{
		cout << "entree la note " << i << " : ";
		cin >> note[i];
		moy = moy + note[i];
	}
	moy = moy/nbTab;
	for (int i = 0; i < nbTab; ++i)
	{
		if(note[i] > moy)
			cout << " la note " << i << " est superieur a la moyenne " << endl;
	}
}