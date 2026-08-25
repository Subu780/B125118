#include <iostream>
using namespace std;

int compare(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

float compare(float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int compare(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int a,b,c;
    float x, y;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Larger of two integers: " << compare(a, b) << endl;
    cout << "Larger of two floating-point numbers: " << compare(x, y) << endl;
    cout << "Larger of three integers: " << compare(a, b, c) << endl;

    return 0;
}