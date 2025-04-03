#include <iostream>
using namespace std;
int main() {
int wybor;
double a, b;
do {
        cout << "Wybierz funkcje:\n";
        cout << "1. Suma\n";
        cout << "2. Roznica\n";
        cout << "3. Iloczyn\n";
        cout << "4. Iloraz\n";
        cout << "0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor != 0) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
        }

        switch (wybor) {
            case 1:
                cout << "Wynik: " << a + b << endl;
                break;
            case 2:
                cout << "Wynik: " << a - b << endl;
                break;
            case 3:
                cout << "Wynik: " << a * b << endl;
                break;
            case 4:
                if (b != 0) {
                    cout << "Wynik: " << a / b << endl;
                } else {
                    cout << "Blad: dzielenie przez zero!" << endl;
                }
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor, spróbuj ponownie." << endl;
                break;
        }

    } while (wybor != 0);

    return 0;
}
