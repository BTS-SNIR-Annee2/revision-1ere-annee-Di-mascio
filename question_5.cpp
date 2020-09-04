#include <iostream>

using namespace std;

int main()
{
	float prix = 0;
	float HT = 0;
	int nbArticles = 0;
	float TVA = 0;
	float TTC = 0;

	cout << "prix de l'articles Hors Taxes ?" << endl;
	cin >> HT;
	cout << "nombre d'articles ?" << endl;
	cin >> nbArticles;
	cout << "taux de TVA ?" << endl;
	cin >> TVA;	
	TTC = HT*nbArticles*(1-(TVA/100));
	cout << TTC;
}