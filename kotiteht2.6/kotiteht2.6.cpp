#include <iostream>
using namespace std;

int laske(char* jono) {
    int pituus = 0;


    while (*jono != '\0') {
        pituus++;
        jono++;
    }

    return pituus;
}

int main() {
    char mjono[] = "Joujee";

    int tulos = laske(mjono);

    cout << "Merkkijonon \"" << mjono << "\" pituus on " << tulos << endl;

    return 0;
}
