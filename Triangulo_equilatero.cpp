#include<iostream>

using namespace std;

int main () {

    int lado1, lado2, lado3;
    cout << "Triangulo rectangulo\n\n";
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;

    if (lado1 == lado2) {
        if ( lado2 == lado3) {
            cout << "Es un triangulo equilatero";
        } else {
            cout << "No es un triangulo equilatero";
        }
    } else {
        cout << "No es un triangulo equilatero";
    }
    return 0;
}
