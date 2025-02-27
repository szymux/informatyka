#include <iostream>
using namespace std;
int main(){
int tablica[10];
int suma = 0;
cout << "Podaj 10 liczb calkowitych:\n";
for (int i = 0; i <10; i++) {
	cout << "Podaj liczbe nr" << i + 1 << ": ";
	cin >> tablica[i];
}
for (int i = 0; i < 5; i++) {
	suma += tablica[i];
}
cout << "\nSuma podanych liczb wynosi:" << suma << endl;




    return 0;

}
