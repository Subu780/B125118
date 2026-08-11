#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float* arr = new float[n];
    cout << "Enter " << n << "numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    float avg = sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}