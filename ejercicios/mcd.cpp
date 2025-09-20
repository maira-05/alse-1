#include<iostream>
using namespace std;
main(){
    int a, b;
    cout<<"Ingrese dos numeros enteros: ";
    cin>>a>>b;
    while (a!=0 && b!=0 ){
        int c = b;
        b = a % b;
        a = c;
    }
    cout<<"El mcd es: "<<a<<endl;
    return 0;
     
}
