#include<iostream>
#include<cmath>

using namespace std;

int main() {

    float a, b, c;

    cout << "Calculadora de la formula general\n\n";
    cout << "Ingresa el valor de A: ";
    cin >> a;
    cout << "Ingresa el valor de B: ";
    cin >> b;
    cout << "Ingresa el valor de C: ";
    cin >> c;

    float d = ((b * b)-(4 * a * c));

    if (d <= 0) {
        float e = -b/(2 * a);
        float f = sqrt(abs(d))/(2 * a);

        cout << "x1= " << e << " + " << f << "i" << endl;
        cout << "x2= " << e << " - " << f << "i" << endl;
    } else {
        float x1 = (-b + sqrt(d))/(2 * a);
        float x2 = (-b - sqrt(d))/(2 * a);

        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }    

    return 0;
}
