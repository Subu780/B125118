#include <iostream>
using namespace std;

int main() {
    int lvl = 100; 
    int *ptr = &lvl;
    cout << "Current: " << *ptr << "\n";
    *ptr += 30; 
    cout << "Added: " << 30 << "\n";
    *ptr -= 20; 
    cout << "Removed: " << 20 << "\n";
    if((*ptr) < 0){
        cout << "Not Possible.\n";
    }
    cout << "Final: " << max(0, *ptr) << "\n";
    return 0;
}