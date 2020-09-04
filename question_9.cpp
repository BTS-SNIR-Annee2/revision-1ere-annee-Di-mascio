#include <iostream>

using namespace std;

int main()
{
	int age = 0;

	cout << "Quel est votre age ?" << endl;
	cin >> age;

	if(age<6)
	{
		cout << "hors categorie" << endl;
	}else if(age<=7){
		cout << "poussin" << endl;
	}else if(age<=9){
		cout << "pupille" << endl;
	}else if(age<=11){
		cout << "minime" << endl;
	}else{	
		cout << "cadet" << endl;
	}

	cout << "solution 2 :" << endl;

	if(age<6)
	{
		cout << "hors categorie" << endl;
	}
	if(age==6 || age == 7){
		cout << "poussin" << endl;
	}
	if(age==8 || age == 9){
		cout << "pupille" << endl;
	}
	if(age==10 || age == 11){
		cout << "minime" << endl;
	}
	if(age >= 12)
	{
		cout << "cadet" << endl;
	}	
}