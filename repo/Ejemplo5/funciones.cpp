#include <iostream>
using namespace std;
void byValue(int a) {
    a = a *2;
    cout << "Inside by Value, a = " << a << endl;
    cout << "Local a address: " << &a << endl;
    //return;

}
//Funtion that takes an argument by reference
void byReference(int &b) {
    b = b*2;
    cout << "Inside by Reference, b = " << b << endl;
    cout << "Local b address: " << &b << endl;
    //return;
}
//Funtion that takes an argument by reference but read-only
int byReferenceReadOnly(const int &c) {
    //c = c*2; // This will cause a compilation error
    cout << "Inside by Reference Read-Only, c = " << c << endl;
    cout << "Using b to compute square to c: "<< c*c << endl;
    cout << "Local b address: " << &c << endl;
    return c*c;
}
double add(double a, double b);
double add(double a);
bool isPrime(int n);

int main() {
    int x = 10;
    cout << "Original x = " << x << endl;
    cout << "Original x address: " << &x << endl;

    byValue(x);
    cout << "After by Value, x = " << x << endl;

    byReference(x);
    cout << "After by Reference, x = " << x << endl;

    byReferenceReadOnly(x);
    cout << "After by Reference Read-Only, x = " << x << endl;

    cout<<"Sum of 5.5 and 4.5: "<<add(5.5,4.5)<<endl;
    cout<<"Sum of 7.3 and default 10.0: "<<add(7.3)<<endl;

    int number;
    cout<<"Enter a positive integer to check if it's prime: ";
    cin>>number;
    if(isPrime(number)){
        cout<<number<<" is a prime number."<<endl;
    }
    else{
        cout<<number<<" is not a prime number."<<endl;
    }

    return 0;
}
