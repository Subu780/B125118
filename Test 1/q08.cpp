#include <iostream>
using namespace std;

void add(int *m, int n) {
    for(int i = 0; i < n; i++) {
        *(m + i) += 5;
    }
}

int main() {
    int n = 4;
    int m[] = {46, 53, 68, 79};
    cout << "Before: ";
    for(int i = 0; i < n; i++) 
        cout << *(m+i) << " ";
    add(m, n);
    cout << "\nAfter: ";
    for(int i = 0; i < n; i++) 
        cout << *(m+i) << " ";
    cout << "\n";
    return 0;
}