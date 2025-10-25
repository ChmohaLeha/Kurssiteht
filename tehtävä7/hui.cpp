#include <iostream>
#include <string>
using namespace std;

double litr(double gal)
{
	const double kerroin = 3.785;
	return gal * kerroin;
}

int main()
{
	double gal;
	while (true)
	{
		cout << "Anna gallonamäärä: ";
		cin >> gal;

		if (gal < 0)
		{
			cout << "Virhe" << endl;
			break;
		}
		double litra = litr(gal);
		cout << gal << "gallonaa on " << litra << "litraa" << endl;

	}	
	return 0;




}