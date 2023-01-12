#include<iostream>

using namespace std;

int main() {
    float base, height, area;

    cout << "Base: "; 
    cin >> base;

    cout << "Height: ";
    cin >> height;

    area = base * height / 2;

    cout << "The triangle's area is: " << area;

    return 0;
}
