#include <iostream>
#include <cstring>
#include <climits>
#include <fstream>

using namespace std;

void ecran(int n)
{
    char nString[7];
    itoa(n, nString, 10);
    int length = strlen(nString);
    for (int i = 0; i < length; ++i) {
        cout << n;
        n /= 10;
        for (int j = 0; j < 2*i+1; ++j) {
            cout << "*";
        }
        cout << nString + i << endl;
    }
    for (int i = 0; i < 2*length + 1; ++i) {
        cout << "*";
    }
}
void ecran_v2(int n)
{
    int temp = n, nrOfDigits = 0, digits[6], stars = 1;
    while(temp != 0)
    {
        digits[nrOfDigits] = temp % 10;
        nrOfDigits++;
        temp /= 10;
    }
    for (int i = 0; i < nrOfDigits; ++i) {
        cout << n;
        n /= 10;
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        for (int j = nrOfDigits-1-i; j >= 0; --j) {
            cout << digits[j];
        }
        cout << endl;
        stars += 2;
    }
    for (int i = 0; i < 2*nrOfDigits+1; ++i) {
        cout << "*";
    }
}
void ecran_v3(int n) {
    int len = to_string(n).length();
    for (int i = 0; i < len; i++) {
        cout << to_string(n).substr(0, len - i);
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << to_string(n).substr(i, len) << endl;
    }
    for (int i = 0; i < 2*len + 1; ++i) {
        cout << "*";
    }
}

void deleteRow(int &n, int m, int matrix[100][100], int from)
{
    for (int i = from; i < n-1; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = matrix[i+1][j];
        }
    }
    n--;
}
void deleteColumn(int n, int &m, int matrix[100][100], int from)
{
    for (int j = from; j < m-1; ++j) {
        for (int i = 0; i < n; ++i) {
            matrix[i][j] = matrix[i][j+1];
        }
    }
    m--;
}
void problem_nr2()
{
    int n, m, min = INT_MAX, max = INT_MIN, minColumn, minRow, maxColumn, maxRow;
    cin >> n >> m;
    int matrix[100][100];
    //beolvasas es minimu, maximum meghatarozasa + poziciok
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
                minColumn = j;
                minRow = i;
            }
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                maxColumn = j;
                maxRow = i;
            }

        }
    }

    deleteRow(n, m, matrix, minRow);
    deleteColumn(n, m, matrix, minColumn);
    if(maxRow != minRow) {
        if(maxRow > minRow) maxRow--;
        //torles
        deleteRow(n, m, matrix, maxRow);
    }

    if(maxColumn != minColumn)
    {
        if(maxColumn > minColumn) maxColumn--;
        //torles
        deleteColumn(n, m, matrix, maxColumn);
    }

    cout << n << " " << m << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void problem_nr3()
{
    ifstream in("bac3.in");
    int x, k, f1, f2;
    char c;
    in >> x >> k;
    if(x <= 8 ) f1 = f2 = 1;
    else if(x == 9)
    {
        f1 = 1;
        f2 = 2;
    }
    else {
        f1 = f2 = 2;
    }
    while(f2 < k)
    {
        int aux = f1 + f2;
        f1 = f2;
        f2 = aux;
    }

    if(k == 1) cout << x;
    else if(k == 2 && x >= 9) cout << x;
    else {
        for (int i = 0; i < f1; ++i) {
            in >> c;
            cout << c;
        }
    }
}

int main() {

    //ecran(2023);
    //problem_nr2();
    problem_nr3();

    return 0;
}
