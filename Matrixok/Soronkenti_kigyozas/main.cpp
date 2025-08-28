#include <iostream>
#include <iomanip>

#define N 50
#define M 50

using namespace std;


void printMatrix(int n, int m, int matrix[N][M]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

/// SORONKÉNTI KÍGYÓZÁS

int main() {

    int n, m, counter = 1;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int matrix[N][M];

    /// FENTRŐL-LE
    cout << endl << "FENTROL-LE" << endl;
    for (int i = 0; i < n; ++i) {
        if(i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = counter++;
            }
        }
        else {
            for (int j = m-1; j >= 0; --j) {
                matrix[i][j] = counter++;
            }
        }
    }
    printMatrix(n, m, matrix);

    /// LENTRŐL-FEL
    counter = 1;
    cout << endl << "LENTROL-FEL" << endl;
    for (int i = n-1; i >= 0; --i) {
        if(i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = counter++;
            }
        }
        else {
            for (int j = m-1; j >= 0; --j) {
                matrix[i][j] = counter++;
            }
        }
    }
    printMatrix(n, m, matrix);

    /// LENTRŐL-FEL
    counter = 1;
    int direction = 0;
    cout << endl << "LENTROL-FEL ALTERNATIVA" << endl;
    for (int i = n-1; i >= 0; --i) {
        if(direction % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = counter++;
            }
            direction = 1;
        }
        else {
            for (int j = m-1; j >= 0; --j) {
                matrix[i][j] = counter++;
            }
            direction = 0;
        }
    }
    printMatrix(n, m, matrix);




    return 0;
}
