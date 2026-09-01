#include <iostream>
using namespace std;

void updateStatus(int *s) {
    (*s)++;
}

string display(int s) {
    if (s == 1) return "Processing";
    else if (s == 2) return "Shipped";
    else if (s == 3) return "Delivered";
    else return "Unknown";
}

int main() {
    int s = 2;
    cout << "Before: " << display(s) << "\n";
    updateStatus(&s);
    cout << "After: " << display(s) << "\n";
    return 0;
}