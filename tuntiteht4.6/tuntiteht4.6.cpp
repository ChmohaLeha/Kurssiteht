#include <iostream>
using namespace std;

class Elain {
public:
    virtual ~Elain() { cout << "Elain destruktori\n"; }
    virtual void aantele() const = 0;
};

class Kissa : public Elain {
public:
    ~Kissa() override { cout << "Kissa destruktori\n"; }
    void aantele() const override { cout << "Miau!" << endl; }
};

class Koira : public Elain {
public:
    ~Koira() override { cout << "Koira destruktori\n"; }
    void aantele() const override { cout << "Hau!" << endl; }
};

int main() {
    Elain* e = new Kissa();
    e->aantele();

    delete e;

    return 0;
}
