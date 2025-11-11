#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string _merkki;
	int _vuos;

public:
	Car() : _merkki("ei tiedossa"), _vuos(0) {}
	void anna_merkki(const string& merkki) { _merkki = merkki; }
	void anna_vuos(int vuos) { _vuos = vuos; }

	void anna_info() const {
		cout << "Auto: " << _merkki << " vuos: " << _vuos << endl;
	}
};

int main()
{
	Car myCar;
	myCar.anna_merkki("Subaru");
	myCar.anna_vuos(2004);
	myCar.anna_info();
}