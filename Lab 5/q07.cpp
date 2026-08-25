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

bool compare(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    float x, y;
    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    int size;
    cout << "Enter size for the two arrays: ";
    cin >> size;
    int* arr1 = new int[size];
    cout << "Enter " << size << " elements for the first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    int* arr2 = new int[size];
    cout << "Enter " << size << " elements for the second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    cout << "\nResults:\n";
    cout << "Larger integer: " << compare(a, b) << endl;
    cout << "Larger floating-point number: " << compare(x, y) << endl;
    if (compare(arr1, arr2, size)) {
        cout << "Both arrays contain identical elements." << endl;
    } else {
        cout << "Both arrays do not contain identical elements." << endl;
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}