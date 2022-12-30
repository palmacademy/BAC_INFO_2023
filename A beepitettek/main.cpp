#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ///szam deklaracioja es beolvasasa
    int number;
    cout << "Adj meg egy szamot:";
    cin >> number;
    ///matematikai fuggvenyek
    cout << "A beolvasott szam gyoke: " << sqrt(number) << endl;
    cout << "A beolvasott szam abszolut erteke: " << abs(number) << endl;

    double number2;
    cout << "Adj meg egy valos szamot:";
    cin >> number2;
    cout << "A beolvasott szam abszolut erteke: " << fabs(number2) << endl;
    cout << "A beolvasott szam kerekitve lefele: " << floor(number2) << endl;
    cout << "A beolvasott szam kerekitve felfele: " << ceil(number2) << endl;
    cout << "A beolvasott szam kerekitve: " << round(number2) << endl;
    cout << "Az elso szam a masodik szam hatvanyan: " << pow(number, number2) << endl;

    return 0;
}
