#include <iostream>
using namespace std;

class Elain {
public:
    virtual void aantele() const = 0;
};

class Kissa : public Elain {
public:
    void aantele() const override { cout << "Miau!" << endl; }
};

class Koira : public Elain {
public:
    void aantele() const override { cout << "Hau!" << endl; }
};

int main() {
    Elain* e = new Kissa();
    e->aantele();

    delete e;

    return 0;
}
