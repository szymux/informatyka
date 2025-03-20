#include <iostream>
using namespace std;
int main() {
int liczba1, liczba2;
cout << "Podaj pierwsza liczbe: ";
cin >> liczba1;
cout << "Podaj druga liczbe: ";
cin >> liczba2;
cout << "Suma: " << liczba1 + liczba2 << endl;
cout << "Roznica: " << liczba1 - liczba2 << endl;
cout << "Iloczyn: " << liczba1 * liczba2 << endl;
 if (liczba2 != 0) {
        cout << "Iloraz: " << liczba1 / liczba2 << endl;
        cout << "Reszta z dzielenia: " << liczba1 % liczba2 << endl;
    } else {
        cout << "Nie mozna dzielic przez zero!" << endl;
    }

return 0;
}

