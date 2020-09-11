#include <iostream>

using namespace std;

int main()
{
	int note[9];

	for (int i = 0; i < 9; ++i)
	{
		cout << "entree la note " << i << " : ";
		cin >> note[i];
	}
}