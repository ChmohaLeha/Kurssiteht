#define Vechicle
#include <string>

class Ajoneuvo {
private:
	double hpn;
	int vuosi;
	double paino;

public:
	Ajoneuvo(double hpn, int vuosi, double paino)
		: hpn(hpn), vuosi(vuosi), paino(paino){}
};

class Auto : public Ajoneuvo {
private:
	int ovet;
	int renkaat;

public:
	Auto(double hpn, int vuosi, double paino, int ovet, int renkaat)
		: Ajoneuvo(hpn, vuosi, paino), ovet(ovet), renkaat(renkaat) {}

};

class HenklAuto : public Auto {
	int maksMatkus;
public:
	HenklAuto(double hpn, int vuosi, double paino, int ovet, int renkaat, int maksMatkus)
		: Auto(hpn, vuosi, paino, ovet, renkaat), maksMatkus(maksMatkus) {
	}
};

class KuormaAuto : public Auto {
	double maksKuorma;
public:
	KuormaAuto(double hpn, int vuosi, double paino, int ovet, int renkaat, int maksKuorma)
		: Auto(hpn, vuosi, paino, ovet, renkaat), maksKuorma(maksKuorma) {}
};

class Lentokone : public Ajoneuvo {
	double maksKorkeus;
public:
	Lentokone(double hpn, int vuosi, double paino, double maksKorkeus)
		: Ajoneuvo(hpn, vuosi, paino), maksKorkeus(maksKorkeus) {}

};

class Laiva : public Ajoneuvo {
	double maksSyvyys;
public:
	Laiva(double hpn, int vuosi, double paino, double maksSyvyys)
		: Ajoneuvo(hpn, vuosi, paino), maksSyvyys(maksSyvyys) {}

};
