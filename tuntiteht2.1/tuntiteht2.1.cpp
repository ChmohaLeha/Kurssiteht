#include <iostream>
using namespace std;

int gl = 10;

void muutaG()
{
	gl = 25;
	cout << "GL muutettu arvoon: " << gl << endl;

}

void tulostaGl()
{
	cout << "GL muuttujan arvo: " << gl << endl;
}


int main()
{
	cout << "Alkuperäinen arvo: " << gl << endl;
	tulostaGl();
	muutaG();
	tulostaGl();

	return 0;
}