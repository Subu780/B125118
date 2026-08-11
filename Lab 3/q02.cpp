#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "The elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}