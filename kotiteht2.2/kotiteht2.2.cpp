#include <iostream>
using namespace std;

int main()
{

	int x = 4;
	int* y = &x;

	cout << "Muuttuja x: " << endl;
	cout << "Arvo: " << x << endl;
	cout << "Osoite: " << &x << endl;


	cout << "Muuttuja y/osoitin: " << endl;
	cout << "Arvo: " << *y << endl;
	cout << "Osoite: " << &y << endl;

	return 0;
}