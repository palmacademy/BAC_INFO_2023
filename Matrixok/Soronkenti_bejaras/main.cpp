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

/// SORONKÉNTI BEJÁRÁSOK

int main() {

    int n, m, counter = 1;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int matrix[N][M];

    /// BALRÓL-JOBBRA FENTRŐL-LE
    cout << endl << "BALROL-JOBBRA, FENTROL-LE" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    counter = 1;
    /// JOBBRÓL-BALRA FENTRŐL-LE
    cout << endl << "JOBBROL-BALRA, FENTROL-LE" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = m-1; j >= 0; --j) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    counter = 1;
    /// BALRÓL-JOBBRA LENTRŐL-FEL
    cout << endl << "BALROL-JOBBRA, LENTROL-FEL" << endl;
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    counter = 1;
    /// JOBBRÓL-BALRA LENTRŐL-FEL
    cout << endl << "JOBBROL-BALRA, LENTROL-FEL" << endl;
    for (int i = n-1; i >= 0; --i) {
        for (int j = m-1; j >= 0; --j) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);
    return 0;
}
