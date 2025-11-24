#define HENKL
#include "State.hpp"
#include <fstream>
#include <string>
using namespace std;

class Henkl {
private:
	string nimi;
	int ika;
	double pituus;

public:
	Henkl(string nimi= " ", int ika = 0, double pituus = 0.0)
		: nimi(nimi), ika(ika), pituus(pituus) {}

	void kirjoState(const string& filename) override {
		ofstream file(filename);
		if (file) {
			file << nimi << endl;
			file << ika << endl;
			file << pituus << endl;
		}
	}

	void lukuState(const string& filename) override {
		ifstream file(filename);
		if (file) {
			getline(file, nimi);
			file >> ika;
			file >> pituus;
		}
	}

	void tulosta() const {
		cout << "Nimi: " << nimi << " Ika: " << ika << " Pituus: " << pituus << endl;
	}
};

