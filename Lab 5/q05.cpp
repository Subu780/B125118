#include <iostream>

using namespace std;

void modify(int &val, int add) {
    val += add;
}

void modify(float &val, float add) {
    val += add;
}

void modify(int *ptr, int add) {
    if (ptr != nullptr) {
        *ptr += add;
    }
}

int main() {
    int a;
    int ad1;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter value to add: ";
    cin >> ad1;
    float b;
    float ad2;
    cout << "Enter a floating-point number: ";
    cin >> b;
    cout << "Enter value to add: ";
    cin >> ad2;
    int c;
    int ad3;
    cout << "Enter an integer for pointer: ";
    cin >> c;
    cout << "Enter value to add: ";
    cin >> ad3;
    cout << "\nResults:\n";
    cout << "Before: " << a << endl;
    modify(a, ad1);
    cout << "After: " << a << endl;
    cout << "Before: " << b << endl;
    modify(b, ad2);
    cout << "After: " << b << endl;
    cout << "Before: " << c << endl;
    modify(&c, ad3);
    cout << "After: " << c << endl;
    return 0;
}