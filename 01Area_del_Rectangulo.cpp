#include<iostream>

using namespace std;

int main() {
    float base, height, area;

    cout << "Base: "; 
    cin >> base;

    cout << "Height: ";
    cin >> height;

    area = base * height;

    cout << "The rectangle's area is: " << area;

    return 0;
}
