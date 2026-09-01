#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of tables: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter table numbers: ";
    for(int i = 0; i < n; i++) 
        cin >> *(arr + i);
    int min = *arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) < min) 
            min = *(arr + i);
    }
    cout << "Smallest table number: " << min << "\n";
    delete[] arr;
    arr = nullptr;
    return 0;
}