#include <iostream>
using namespace std;
int main() {
    int godziny;
    char pojazd;
    int oplata;
cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;
cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;
switch(pojazd) {
        case 'S': 
            oplata = godziny * 5;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        case 'M': 
            oplata = godziny * 3;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        case 'A':
            oplata = godziny * 10;
            cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
            break;
        default: 
            cout << "Błąd: Nieznany typ pojazdu!" << endl;
    }

    return 0;
}
