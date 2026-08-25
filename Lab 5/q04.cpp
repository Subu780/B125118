#include <iostream>
using namespace std;

int search(int intarr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (intarr[i] == key) {
            return i;
        }
    }
    return -1;
}

int search(char chararr[], int size, char key) {
    for (int i = 0; i < size; i++) {
        if (chararr[i] == key) {
            return i;
        }
    }
    return -1;
}

int search(int intarr[], int size, int key, int start, int end) {
    for (int i = start; i <= end && i < size; i++) {
        if (intarr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int intsize;
    cout << "Enter size of integer array: ";
    cin >> intsize;
    int* intarr = new int[intsize];
    cout << "Enter " << intsize << " elements for integer array:\n";
    for (int i = 0; i < intsize; i++) {
        cin >> intarr[i];
    }
    int intkey;
    cout << "Enter integer to search: ";
    cin >> intkey;
    int charsize;
    cout << "\nEnter size of character array: ";
    cin >> charsize;
    char* chararr = new char[charsize];
    cout << "Enter " << charsize << " elements for character array:\n";
    for (int i = 0; i < charsize; i++) {
        cin >> chararr[i];
    }
    char charkey;
    cout << "Enter character to search: ";
    cin >> charkey;
    int start, end;
    cout << "\nEnter start and end index for range search in integer array: ";
    cin >> start >> end;
    cout << "\nResults\n";
    int pos1 = search(intarr, intsize, intkey);
    if (pos1 != -1) {
        cout << "Integer found at index: " << pos1 << endl;
    } else {
        cout << "Integer not found in the array." << endl;
    }
    int pos2 = search(chararr, charsize, charkey);
    if (pos2 != -1) {
        cout << "Character found at index: " << pos2 << endl;
    } else {
        cout << "Character not found in the array." << endl;
    }
    int pos3 = search(intarr, intsize, intkey, start, end);
    if (pos3 != -1) {
        cout << "Integer found within range at index: " << pos3 << endl;
    } else {
        cout << "Integer not found within the specified range." << endl;
    }
    delete[] intarr;
    delete[] chararr;
    return 0;
}