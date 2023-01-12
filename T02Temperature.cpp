#include<iostream>

using namespace std;
int main() {
    int option;
    float temperature, fahrenheit, celsius;

    cout << "1.-FtoC" << endl << "2.-CtoF" << endl;
    cin >> option;

    switch (option) {
        case 1:
            cout << "Give me the degrees Fahrenheit: ";
            cin >> fahrenheit;

            temperature = 5.0 / 9.0 * (fahrenheit - 32);
            cout << "The temperature is " << temperature << "ºC";
            break;
        case 2:
            cout << "Give me the degrees Celsius: ";
            cin >> celsius;

            temperature = 9 * celsius / 5 + 32;
            cout << "The temperature is " << temperature << "ºF";
            break;
        default:
            cout << "Ta' tontito mijo?";
            return 0;
    }


    return 0;
}
