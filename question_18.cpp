#include <iostream>

using namespace std;

int main()
{
	int tab[5]={0,0,0,0,0};
	int nb;
	int temp;
	int consecutif = 1;
	for (int i = 0; i < 5; ++i)
	{
		cout << "entree un nb : ";
		cin >> nb;
		tab[i]=nb;
		if(i == 0)
		{
			temp = nb;
		}
		if(temp+1 == nb)
		{
			temp = nb;
			consecutif = consecutif+1;
		}
	}
	if(consecutif == 5)
	{
		cout << "c'est consecutif" << endl;
	}else{
		cout << "ce n'est pas consecutif" << endl;
	}
}