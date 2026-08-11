#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int** mat = new int*[m];
    for (int i = 0; i < m; ++i) {
        mat[i] = new int[n];
    }
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    cout << "The matrix is:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
    mat = nullptr;
    return 0;
}