#include <iostream>
using namespace std;

class Elain {
public:
    virtual void aantele() const = 0; // puhdas virtuaalifunktio
};

class Kissa : public Elain {
public:
    void aantele() const override {
        cout << "Miau!" << endl;
    }
};

class Koira : public Elain {
public:
    void aantele() const override {
        cout << "Hau!" << endl;
    }
};

int main() {
    Kissa k;
    Koira ko;

    k.aantele();
    ko.aantele();

    return 0;
}
