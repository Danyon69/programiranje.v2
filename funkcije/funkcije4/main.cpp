#include <iostream>
#include <cmath>

using namespace std;

bool ispravanUnos(int bodovi, int maksimalnoBodova) {
    return maksimalnoBodova > 0 && bodovi >= 0 && bodovi <= maksimalnoBodova;
}

double izracunajPostotak(int bodovi, int maksimalnoBodova) {
    return 100.0 * bodovi / maksimalnoBodova;
}

int odrediOcjenu(double postotak) {
    if (postotak < 50) {
        return 1;
    } else if (postotak < 65) {
        return 2;
    } else if (postotak < 80) {
        return 3;
    } else if (postotak < 90) {
        return 4;
    } else {
        return 5;
    }
}

void ispisiIzvjestaj(int bodovi, int maksimalnoBodova,
                     double postotak, int ocjena) {
    cout << "Bodovi: " << bodovi << " / " << maksimalnoBodova << endl;
    cout << "Postotak: " << postotak << " %" << endl;
    cout << "Ocjena: " << ocjena << endl;
}

int main() {
    int bodovi, maksimalnoBodova;
    double postotak;
    int ocjena;

    cout << "Unesi ostvarene bodove: ";
    cin >> bodovi;

    cout << "Unesi maksimalan broj bodova: ";
    cin >> maksimalnoBodova;

    if (!ispravanUnos(bodovi, maksimalnoBodova)) {
        cout << "Pogreska: neispravan unos bodova." << endl;
        return 0;
    }

    postotak = izracunajPostotak(bodovi, maksimalnoBodova);
    ocjena = odrediOcjenu(postotak);

    ispisiIzvjestaj(bodovi, maksimalnoBodova, postotak, ocjena);

    return 0;
}
