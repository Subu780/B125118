#include <iostream>

using namespace std;

int count(int n) {
    if (n == 0) return 1;
    int c = 0;
    while (n > 0) {
        c++;
        n /= 10;
    }
    return c;
}

int count(int arr[], int size) {
    return size;
}

int count(char arr[], int size, char key) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            c++;
        }
    }
    return c;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int size;
    cout << "Enter size of integer array: ";
    cin >> size;
    int* intarr = new int[size];
    cout << "Enter " << size << " elements for integer array:\n";
    for (int i = 0; i < size; i++) {
        cin >> intarr[i];
    }
    int charsize;
    cout << "Enter size of character array: ";
    cin >> charsize;
    char* chararr = new char[charsize];
    cout << "Enter " << charsize << " elements for character array:\n";
    for (int i = 0; i < charsize; i++) {
        cin >> chararr[i];
    }
    char key;
    cout << "Enter character to count occurrences: ";
    cin >> key;
    cout << "\nResults:\n";
    cout << "Number of digits: " << count(num) << endl;
    cout << "Number of elements in integer array: " << count(intarr, size) << endl;
    cout << "Occurrences of character: " << count(chararr, charsize, key) << endl;
    delete[] intarr;
    delete[] chararr;
    return 0;
}