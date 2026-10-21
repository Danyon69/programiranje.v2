#include <iostream>
#include <cmath>

using namespace std;

bool jeParan(int broj) {
    return broj % 2 == 0;
}

int apsolutnaVrijednost(int broj) {
    return abs(broj);
}

int kvadrat(int broj) {
    return broj * broj;
}

void ispisiAnalizu(int broj) {
    if (jeParan(broj)) {
        cout << "Broj je paran." << endl;
    } else {
        cout << "Broj je neparan." << endl;
    }

    cout << "Apsolutna vrijednost: " << apsolutnaVrijednost(broj) << endl;
    cout << "Kvadrat broja: " << kvadrat(broj) << endl;
}

int main() {
    int broj;

    do {
        cout << "Unesi cijeli broj: ";
        cin >> broj;

        if (broj < -100 || broj > 100) {
            cout << "Broj mora biti u rasponu od -100 do 100." << endl;
        }
    } while (broj < -100 || broj > 100);

    ispisiAnalizu(broj);

    return 0;
}
