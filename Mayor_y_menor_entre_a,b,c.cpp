#include<iostream>

using namespace std;

int main () {
    float  a, b, c, d, e;

    cout << "A= ";
    cin >> a;

    cout << "B= ";
    cin >> b;

    cout << "C= ";
    cin >> c;

    d = a;

    if (d < b) {
        d = b;
    } 

    if (d < c) {
        d = c;
    } 

    e = a;

    if (e > b) {
        e = b;
    } 

    if (e > c) {
        e = c;
    } 


    cout << "\nEl numero mayor es: " << d;
    cout << "\nEl numero menor es: " << e;

    return 0;
}
