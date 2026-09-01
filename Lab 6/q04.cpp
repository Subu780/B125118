#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr = arr;
    cout << "Current seat numbers:\n";
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << "\nEnter the position of the seat number to correct (1-8): ";
    int pos;
    cin >> pos;
    cout << "Enter the correct seat number: ";
    int ns;
    cin >> ns;
    *(ptr + pos - 1) = ns;
    cout << "Updated seat numbers:\n";
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}