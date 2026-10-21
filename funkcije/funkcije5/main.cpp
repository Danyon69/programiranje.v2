#include <iostream>
#include<cmath>

using namespace std;

double izracunajStavku(double cijena, int kolicina) {
    return cijena * kolicina;
}

double izracunajMeduzbroj(double stavka1, double stavka2, double stavka3) {
    return stavka1 + stavka2 + stavka3;
}

double odrediStopuPopusta(double meduzbroj) {
    if (meduzbroj >= 100) {
        return 0.10;
    } else {
        return 0.0;
    }
}

double izracunajKonacniIznos(double meduzbroj) {
    double stopaPopusta = odrediStopuPopusta(meduzbroj);
    return meduzbroj - meduzbroj * stopaPopusta;
}

void ispisiRacun(double stavka1, double stavka2, double stavka3,
                 double meduzbroj, double konacniIznos) {
    double popust = meduzbroj - konacniIznos;

    cout << "Stavka 1: " << stavka1 << " EUR" << endl;
    cout << "Stavka 2: " << stavka2 << " EUR" << endl;
    cout << "Stavka 3: " << stavka3 << " EUR" << endl;
    cout << "Meduzbroj: " << meduzbroj << " EUR" << endl;
    cout << "Popust: " << popust << " EUR" << endl;
    cout << "Za platiti: " << konacniIznos << " EUR" << endl;
}

int main() {
    double cijena1, cijena2, cijena3;
    int kolicina1, kolicina2, kolicina3;

    do {
        cout << "Proizvod 1 - cijena i kolicina: ";
        cin >> cijena1 >> kolicina1;

        if (cijena1 < 0 || kolicina1 <= 0) {
            cout << "Neispravan unos. Pokusajte ponovno." << endl;
        }
    } while (cijena1 < 0 || kolicina1 <= 0);

    do {
        cout << "Proizvod 2 - cijena i kolicina: ";
        cin >> cijena2 >>
