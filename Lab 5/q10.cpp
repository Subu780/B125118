#include <iostream>
using namespace std;

int process(int a, int b) {
    return a + b;
}

float process(int a, float b) {
    return a * b;
}

float process(float a, float b) {
    return a - b;
}

int process(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int process(int *ptr1, int *ptr2) {
    return (*ptr1) * (*ptr2);
}

int main() {
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    int iv;
    float fv;
    cout << "Enter an integer and a floating-point value: ";
    cin >> iv>> fv;
    float f1, f2;
    cout << "Enter two floating-point values: ";
    cin >> f1 >> f2;
    int size;
    cout << "Enter size of integer array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " elements for integer array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int p1, p2;
    cout << "Enter two integers for pointer operation: ";
    cin >> p1 >> p2;
    cout << "\nResults:\n";
    cout << "Sum of two integers: " << process(i1, i2) << endl;
    cout << "Product of integer and float: " << process(iv, fv) << endl;
    cout << "Difference of two floats: " << process(f1, f2) << endl;
    cout << "Sum of array elements: " << process(arr, size) << endl;
    cout << "Product of pointer values: " << process(&p1, &p2) << endl;
    delete[] arr;
    return 0;
}