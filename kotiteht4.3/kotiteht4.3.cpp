#include <iostream>
#include <string>
using namespace std;

class Auto
{
private:
	string rekkari;
	int huipnop;
	int nop;
	double matka;

public:

	Auto(const string& rek, int huippu)
		: rekkari(rek), huipnop(huippu), nop(0), matka(0.0) {
	}

	void kiihd(int muutos)
	{
		nop += muutos;
		if (nop > huipnop)
			nop = huipnop;
		else if (nop < 0)
			nop = 0;
	}
	void kulje(double tunnit)
	{
		matka += nop * tunnit;
	}

	void tulosta() const
	{
		cout << "rekkari: " << rekkari << "\n";
		cout << "Huippunopeus: " << huipnop << "\n";
		cout << "nopeus: " << nop << "\n";
		cout << "matka: " << matka << "\n";

	}
};

int main()
{
	Auto a1("HUI-367", 182);
	a1.kiihd(60);
	a1.kulje(1.5);
	a1.tulosta();

	return 0;
}