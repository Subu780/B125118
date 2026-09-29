#include <iostream>
using namespace std;

void longest(int *d, int n) {
    int max = *d;
    for(int i = 1; i < n; i++) {
        if(*(d + i) > max) max = *(d + i);
    }
    cout << "Longest duration: " << max << "\n";
}

int main() {
    int d[6] = {45, 30, 60, 25, 50, 40};
    longest(d, 6);
    return 0;
}