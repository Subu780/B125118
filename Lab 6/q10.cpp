#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;
    int *c = new int[n]; 
    cout << "Enter contacts: ";
    for(int i = 0; i < n; i++) 
        cin >> *(c + i);
    int s; 
    cout << "Enter number to search: ";
    cin >> s;
    bool f = false; 
    for(int i = 0; i < n; i++) {
        if(*(c + i) == s) { 
            cout << "Found at position: " << i << "\n";
            f = true;
            break;
        }
    }
    if(!f) cout << "Not found\n";
    delete[] c; 
    c = nullptr;
    return 0;
}