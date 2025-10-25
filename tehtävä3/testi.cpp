#include <iostream>
#include <string>
using namespace std;

int main()
{
	string suku;
	int hemo;
	

	cout << "Sukupuoli? mies/nainen ";
	cin >> suku;

	cout << "Hemoglobiini arvo: ";
	cin >> hemo;

	if (suku == "mies" || suku == "Mies")
	{
		if (hemo < 134)
			cout << "Hemoglobiini alhainen" << endl;
		else if (hemo <= 195)
			cout << "Hemoglobiini on normaali" << endl;
		else
			cout << "Hemoglobiini on korkea" << endl;

	}
	else if (suku == "nainen" || suku == "Nainen")
	{
		if (hemo < 117)
			cout << "Hemoglobiini alhainen" << endl;
		else if (hemo <= 175)
			cout << "Hemoglobiini on normaali" << endl;
		else
			cout << "Hemoglobiini on korkea" << endl;
	}
	else
	{
		cout << "Virheellinen syöttö" << endl;
	}

	return 0;

}