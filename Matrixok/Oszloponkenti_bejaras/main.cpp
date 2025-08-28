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

    /// FENTRŐL-LE BALRÓL-JOBBRA
    cout << endl << "FENTROL-LE, BALROL-JOBBRA" << endl;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    ///FENTRŐL-LE, JOBBRÓL-BALRA
    counter = 1;
    cout << endl << "FENTROL-LE, JOBBROL-BALRA" << endl;
    for (int j = m-1; j >= 0; --j) {
        for (int i = 0; i < n; ++i) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);


    /// LENTRŐL-FEL BALRÓL-JOBBRA
    counter = 1;
    cout << endl << "LENTROL-FEL, BALROL-JOBBRA" << endl;
    for (int j = 0; j < m; ++j) {
        for (int i = n-1; i >= 0; --i) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    /// LENTRŐL-FEL JOBBRÓL-BALRA
    counter = 1;
    cout << endl << "LENTROL-FEL, JOBBROL-BALRA" << endl;
    for (int j = m-1; j >= 0; --j) {
        for (int i = n-1; i >= 0; --i) {
            matrix[i][j] = counter++;
        }
    }
    printMatrix(n, m, matrix);

    return 0;
}
