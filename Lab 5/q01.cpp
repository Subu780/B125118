#include <iostream>
using namespace std;

int calculate(int num1, int num2) {
    return num1 + num2;
}

int calculate(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

float calculate(float num1, float num2) {
    return num1 + num2;
}

int main() {
    int a,b,c;
    float x, y;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Sum of two integers: " << calculate(a, b) << endl;
    cout << "Sum of three integers: " << calculate(a, b, c) << endl;
    cout << "Sum of two floating-point values: " << calculate(x, y) << endl;
    return 0;
}