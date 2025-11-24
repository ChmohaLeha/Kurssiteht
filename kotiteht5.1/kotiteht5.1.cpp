#include <iostream>
#include "Vechicles.hpp"
using namespace std;

int main()
{
	HenklAuto h(180, 2004, 1680, 5, 4, 5);
	KuormaAuto k(125, 2007, 7800, 2, 6, 12000);
	Lentokone l(967, 2020, 30000, 11000);
	Laiva x(50, 1998, 200000, 10);

	cout << " Ajouneuvoje instanssit tehty" << endl;

	return 0;
}