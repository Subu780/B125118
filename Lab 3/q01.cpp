#include <iostream>
using namespace std;

int main() {
    int* ptrNum = new int;
    cout << "Enter an integer: ";
    cin >> *ptrNum;
    cout << "The stored value is: " << *ptrNum << endl;
    delete ptrNum;
    ptrNum = nullptr;
    return 0;
}