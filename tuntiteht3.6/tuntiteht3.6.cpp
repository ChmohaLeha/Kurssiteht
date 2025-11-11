#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string _merkki;
	int _vuos;
public:

	Car(const string& merkki, int vuos)
		: _merkki(merkki), _vuos(vuos) {}

	Car(const Car& other)
		: _merkki(other._merkki), _vuos(other._vuos)
	{
		cout << "Kopioi konstruktori" << _merkki << endl;
	}

	void print_info() const
	{
		cout << "Car: " << _merkki << "vuos " << _vuos << endl;
	}
};

void print_car(Car x)
{
	cout << "[arvo] ";
	x.print_info();
}

void print_const(const Car& x)
{
	cout << "[Jouu]";
	x.print_info();
}

int main()
{
	Car testi("Opel", 2008);
	print_car(testi);
	print_const(testi);

}