#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, t;
    double P, r, A;

    cout << "Ingrese un número para P: ";
    cin >> P;
    cout << "Ingrese una tasa de interés anual: ";
    cin >> r;
    cout << "Ingrese el número de veces que se aplica el interes al año: ";
    cin >> n;
    cout << "Ingrese el número de años que se dejará el dinero invertido: ";
    cin >> t;
    A = P * pow(1+r/n,n*t);

    cout << "El monto acumulado después de " << t << " años es: " << A << endl;
    return 0;
    
}