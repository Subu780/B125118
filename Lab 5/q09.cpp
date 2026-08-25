#include <iostream>
using namespace std;

int findmx(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int findmx(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int findmx(int *arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    int p1, p2;
    cout << "Enter two integers for pointer comparison: ";
    cin >> p1 >> p2;
    int size;
    cout << "Enter size of integer array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " elements for integer array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "\nResults:\n";
    cout << "Maximum between two integers: " << findmx(x, y) << endl;
    cout << "Maximum between pointer values: " << findmx(&p1, &p2) << endl;
    cout << "Maximum in the integer array: " << findmx(arr, size) << endl;
    delete[] arr;
    return 0;
}