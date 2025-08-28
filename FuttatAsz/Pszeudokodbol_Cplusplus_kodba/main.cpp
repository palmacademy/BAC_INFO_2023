#include <iostream>

using namespace std;

int main() {
    int n, nr = 0, c = 9;
    cin >> n;
    while (c >= 0) {
        int m = n;
        while (m != 0 && m % 10 != c) {
            m /= 10;
        }
        if (m != 0) {
            nr = nr * 10 + m % 10;
        }
        c--;
    }
    cout << nr;
    return 0;
}
