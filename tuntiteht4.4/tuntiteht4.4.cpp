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
    // Elain e tulee virhe jea

    cout << "Elain-oliota ei voi luoda, koska se on abstrakti luokka." << endl;
    return 0;
}