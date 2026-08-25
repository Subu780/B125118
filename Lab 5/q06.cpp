#include <iostream>
using namespace std;

void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(float num) {
    cout << "Floating-point number: " << num << endl;
}

void display(char ch) {
    cout << "Character: " << ch << endl;
}

void display(int intarr[], int size) {
    cout << "Integer array elements: ";
    for (int i = 0; i < size; i++) {
        cout << intarr[i] << " ";
    }
    cout << endl;
}

void display(char chararr[], int size) {
    cout << "Character array elements: ";
    for (int i = 0; i < size; i++) {
        cout << chararr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intval;
    cout << "Enter an integer: ";
    cin >> intval;
    float floatval;
    cout << "Enter a floating-point number: ";
    cin >> floatval;
    char charval;
    cout << "Enter a character: ";
    cin >> charval;
    int intsize;
    cout << "Enter size of integer array: ";
    cin >> intsize;
    int* intarr = new int[intsize];
    cout << "Enter " << intsize << " elements for integer array:\n";
    for (int i = 0; i < intsize; i++) {
        cin >> intarr[i];
    }
    int charsize;
    cout << "Enter size of character array: ";
    cin >> charsize;
    char* chararr = new char[charsize];
    cout << "Enter " << charsize << " elements for character array:\n";
    for (int i = 0; i < charsize; i++) {
        cin >> chararr[i];
    }
    cout << "\nResults\n";
    display(intval);
    display(floatval);
    display(charval);
    display(intarr, intsize);
    display(chararr, charsize);
    delete[] intarr;
    delete[] chararr;
    return 0;
}