#include <iostream>
using namespace std;

int gl = 15;

void muutaG()
{
	gl = 25;
	cout << "GL muutettu arvoon: " << gl << endl;

}
void tulostaGl()
{
	cout << "GL muuttujan arvo: " << gl << endl;
}