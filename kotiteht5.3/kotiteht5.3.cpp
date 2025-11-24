#include <iostream>
#include "Henkl.hpp"

int main()
{
	Henkl h("Pasi", 25, 1.93);
	h.kirjoState("henkl.txt");

	Henkl h2;
	h2.lukuState("henkl.txt");

	h2.tulosta();
	return 0;
}