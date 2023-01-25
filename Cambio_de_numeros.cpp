#include<iostream>

using namespace std;

int main () {
    float a, b, c;

    cout << "Introduce los valores que se te piden: \n\n";
    cout << "A=";
    cin >> a;

    cout << "B=";
    cin >> b;

    cout << "\nLos nuevos valores son: \n\n";

    c = a;
    a = b;
    b = c;

    cout << "A=" << a << endl;
    cout << "B=" << b;

    return 0;
}
