#include <iostream>
using namespace std;
int main() {
    
    int numeros[5];
    int suma = 0;
    cout << "Ingrese 5 números enteros: " << endl;
    for (int i=0; i<5; i++) {
        cin >> numeros[i];
        suma += numeros[i];
    }
    cout << "La suma de los números es: " << suma << endl;
    return 0;

}
