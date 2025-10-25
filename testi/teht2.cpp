#include <iostream>
using namespace std;

int main()
{
	double kanta, korkeus;
	double ala, piiri;

	cout << "kanta : ";
	cin >> kanta;
	cout << "korkeus: ";
	cin >> korkeus;

	ala = kanta * korkeus / 2.0;
	piiri = 2 * (kanta * korkeus);

	cout << ala << endl;
	cout << piiri << endl;
	
	return 0;
}