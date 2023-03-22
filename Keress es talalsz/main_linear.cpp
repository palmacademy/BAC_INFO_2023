#include <iostream>

using namespace std;

int linearSearchFromEndStart(int n, int array[100], int x)
{
    for (int i = n-1; i >= 0; --i) {
        if(array[i] == x) {
            return i;
        }
    }
    return -1;
}
int linearSearchFromStartToEnd(int n, int array[100], int x)
{
    for (int i = 0; i < n; ++i) {
        if(array[i] == x) {
            return i;
        }
    }
    return -1;
}
int linearSearchCountValue(int n, int array[100], int x){
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if(array[i] == x) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int n = 6, x, array[] = {3, 6, 6, 8, 6, 1};
    cout << "A tomb elemei:";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << "Melyik erteket keresed?";
    cin >> x;
    //benne van-e vagy nincs? : igen, benne van / nincs benne
    int result = linearSearchFromStartToEnd(n, array, x);
    if(result == -1) {
        cout << "Nincs benne a keresett ertek." << endl;
    }
    else {
        cout << "Benne van a keresett ertek, elolrol a(z) " << result << " pozicion" << endl;
    }

    result = linearSearchFromEndStart(n, array, x);
    if(result != -1) {
        cout << "Benne van a keresett ertek, hatulrol a(z) " << result << " pozicion" << endl;
    }
    cout << "A keresett ertek " << linearSearchCountValue(n, array, x) << " alkalommal fordul elo." << endl;
    //ha benne van, hol?
    //elso/utolso elofordulas

    return 0;
}
