#include <iostream>
using namespace std;

extern int gl;

void muutaG();
void tulostaGl();


int main()
{
	cout << "Alkuperäinen arvo: " << gl << endl;
	tulostaGl();
	muutaG();
	tulostaGl();

	return 0;
}
