#include <iostream>
using namespace std;

class Elain {
public:
    Elain() { cout << "Elain konstruktorissa\n"; }
};

class Kissa : public Elain {
public:
    Kissa() { cout << "Kissa konstruktorissa\n"; }
};

class Koira : public Elain {
public:
    Koira() { cout << "Koira konstruktorissa\n"; }
};

int main() {
    Elain e;
    Kissa k;
    Koira ko;
    return 0;
}
