#include <iostream>
using namespace std;
int main() {
    int pierwsza_liczba, druga_liczba;
    char dzialanie;
cout << "Podaj pierwsza liczbe: ";
    cin >> pierwsza_liczba;
cout << "Podaj druga liczbe: ";
    cin >> druga_liczba;
cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> dzialanie;
 if (dzialanie == '+') {
        cout << "Wynik: " << pierwsza_liczba + druga_liczba << endl;
    }
    else if (dzialanie == '-') {
        cout << "Wynik: " << pierwsza_liczba - druga_liczba << endl;
    }
    else if (dzialanie == '*') {
        cout << "Wynik: " << pierwsza_liczba * druga_liczba << endl;
    }
    else if (dzialanie == '/') {
    
        if (druga_liczba != 0) {
            cout << "Wynik: " << pierwsza_liczba / druga_liczba << endl;
        } else {
            cout << "Błąd: Dzielenie przez 0!" << endl;
        }
    } else {
        cout << "Błąd: Nieznany znak działania!" << endl;
    }
 return 0;
}
