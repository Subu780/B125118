#include <iostream>
using namespace std;

int main() {
    int b = 50; 
    int *p = &b;
    cout << "Current: " << *p << "\n";
    *p += 200; 
    cout << "Added: " << 200 << "\n";
    if(*p > 100){
        cout << "Not Possible.\n";
    }
    cout << "Final: " << min(100,*p) << "\n";
    return 0;
}

