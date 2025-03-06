#include <iostream>

using namespace std;

int main() {
    float tempCelsius, tempConverted;
    char jednostka;
cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> tempCelsius;
cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K':
            tempConverted = tempCelsius + 273.15;
            cout << "Temperatura w stopniach Kelvina: " << tempConverted << " K" << endl;
            break;
        case 'F': 
            tempConverted = (tempCelsius * 9/5) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << tempConverted << " F" << endl;
            break;
        default: 
            cout << "Błąd: Nieprawidłowa jednostka!" << endl;
    }

    return 0;
}
