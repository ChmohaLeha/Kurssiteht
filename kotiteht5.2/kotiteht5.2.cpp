#include <iostream>
#include "Laskut.hpp"
using namespace std;

int main()
{
	Laskutoimitus* laskin;

	laskin = new Yhteen();
	cout << " Yhteenlasju: " << laskin->laske(5, 4) << endl;
	delete laskin;

	laskin = new Kerto();
	cout << " Kertolasku: " << laskin->laske(6, 8) << endl;
	delete laskin;

	return 0;
}

