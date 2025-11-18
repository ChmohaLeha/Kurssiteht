#include <iostream>
#include <string>
using namespace std;

class Henkilo {
private:
    string nimi;

public:
    void setNimi(const string& n) { nimi = n; }
    string getNimi() const { return nimi; }
};

class Opiskelija : public Henkilo {
private:
    int opiskelijanumero;

public:
    void setOpiskelijanumero(int num) { opiskelijanumero = num; }
    int getOpiskelijanumero() const { return opiskelijanumero; }
};

int main() {
    Opiskelija o;
    o.setNimi("Pasi Palli");
    o.setOpiskelijanumero(48672);

    cout << "Opiskelija: " << o.getNimi()
        << ", numero: " << o.getOpiskelijanumero() << endl;

    return 0;
}
