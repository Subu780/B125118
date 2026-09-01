#include <iostream>
using namespace std;

int main() {
    int arr[6] = {101, 102, 103, 104, 105, 106};
    int *ptr = arr;
    for (int i = 0; i < 6; i++) {
        cout << "Equipment ID: " << *(ptr + i) << "\n";
        cout << "Address: " << (ptr + i) << "\n";
    }   
    return 0;
}