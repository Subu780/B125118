#include <iostream>
using namespace std;

int calculate(int intarr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += intarr[i];
    }
    return total;
}

float calculate(float floatarr[], int size) {
    float total = 0.0f;
    for (int i = 0; i < size; i++) {
        total += floatarr[i];
    }
    return total;
}

int calculate(int intarr[], int size, int count) {
    int total = 0;
    for (int i = 0; i < count && i < size; i++) {
        total += intarr[i];
    }
    return total;
}

int main() {
    int size1;
    cout << "Enter size of integer array: ";
    cin >> size1;
    int* intarr = new int[size1];
    cout << "Enter " << size1 << " elements for integer array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> intarr[i];
    }
    int size2;
    cout << "\nEnter size of floating-point array: ";
    cin >> size2;
    float* floatarr = new float[size2];
    cout << "Enter " << size2 << " elements for floating-point array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> floatarr[i];
    }
    int count;
    cout << "\nEnter number of elements to consider from the integer array for the portion total: ";
    cin >> count;
    cout << "\nResults\n";
    cout << "Total of integer array: " << calculate(intarr, size1) << endl;
    cout << "Total of floating-point array: " << calculate(floatarr, size2) << endl;
    cout << "Total of portion of integer array: " << calculate(intarr, size1, count) << endl;
    delete[] intarr;
    delete[] floatarr;
    return 0;
}