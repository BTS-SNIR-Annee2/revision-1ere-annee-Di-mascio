#include <iostream>

using namespace std;

int main()
{
	int tab1[5]={5,6,4,45,86};
	int tab2[5]={6,20,10,3,14};
	int tabSomme[5];

	for (int i = 0; i < 5; ++i)
	{
		tabSomme[i] = tab1[i] + tab2[i];
		cout << tabSomme[i] << endl;
	}
}