#include <iostream>

using namespace std;

int main()
{
	int nb = 0;
	cout << "veuillez choisir un nombre entre 10 et 20" << endl;
	do{
		cin >> nb;
		if(nb<10)
		{
			cout << "plus grand !" << endl;
		}
		if(nb>20)
		{
			cout << "plus petit !" << endl;
		}
	}while(!(nb>=10 && nb<=20));
}