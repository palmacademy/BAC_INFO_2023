//konyvtarak
#include <iostream>

using namespace std;

int main() {
    ///Alapveto tudnivalok - Valtozok
    //valtozok deklaracioja
    int number1, number2 = 2;
    //kiiro uzenet
    cout << "Adj meg egy egesz szamot:";
    //beolvasas
    cin >> number1;
    //valtozok kiiratasa, ujsor: \n, endl
    cout << "Az elso szam: " << number1 << "\nA masodik szam: " << number2 << endl;

    ////Operatorok

    int sum = number1 + number2;
    int sub = number1 - number2;
    float division = (float)number1 / (float)number2;
    int multiple = number1 * number2;
    int remained = number1 % number2;
    cout << "A ket szam osszege: " << sum << endl;
    cout << "A ket szam kulonbsege: " << sub << endl;
    cout << "A ket szam szorzata: " << multiple << endl;
    cout << "A ket szam hanyadosa: " << division << endl;
    cout << "A ket szam maradeka: " << remained << endl;

    ///Ellenorzesek
    cout << "Adj meg ket hatart: [a, b] ";
    int a, b, input;
    cin >> a >> b;
    cout << "Adj meg egy szamot:";
    cin >> input;
    cout << "A beolvasott szam eleme [" << a << ", " << b << "] intervallumnak?" << endl;
    cout << "Valasz: ";
    if(input >= a && input <= b) {
        cout << "igen" << endl;
    }
    else {
        cout << "nem" << endl;
    }

    cout << "Adj meg egy osztot:";
    int divider;
    cin >> divider;
    cout << "Az elso vagy a masodik szam oszthato a beolvasott szammal: ";
    if(number1 % divider == 0 || number2 % divider == 0) {
        cout << "igaz" << endl;
    }
    else {
        cout << "hamis" << endl;
    }

    ///Igazsagertek kiiratasa
    cout << "Az elso szam paros: " << (number1 % 2 == 0) << endl;
    cout << "A masodik szam paratlan: " << (number2 % 2 != 0) << endl;

    cout << "Az elso szam paros: " << !(number1 % 2) << endl;
    cout << "A masodik szam paratlan: " << (number2 % 2) << endl;

    //3-mal valo osztasi maradek egyenlo-e 0-val: ennek az igazsagerteke
    cout << !(number1 % 3) << endl;
    //3-mal valo osztasi maradek kiiratasa
    cout << (number1 % 3) << endl;
    cout << number1 % 3 << endl;

    //kilepesi kod - exit code
    return 0;
}
