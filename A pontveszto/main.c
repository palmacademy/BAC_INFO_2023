#include <stdio.h>

int main() {
    ///Alapveto tudnivalok - Valtozok
    //valtozok deklaracioja
    int number1, number2 = 2;
    //kiiro uzenet
    printf("Adj meg egesz szamot:");
    //beolvasas
    scanf("%i", &number1);
    printf("Az elso szam: %i a masodik szam: %i\n", number1, number2);

    int sum = number1 + number2;
    int sub = number1 - number2;
    float division = (float)number1 / (float)number2;
    int multiple = number1 * number2;
    int remained = number1 % number2;

    printf("A ket szam osszege: %i\n", sum);
    printf("A ket szam kulonbsege: %i\n", sub);
    printf("A ket szam szorzata: %i\n", multiple);
    printf("A ket szam hanyadosa: %f\n", division);
    printf("A ket szam maradeka: %i\n", remained);


    printf("Adj meg ket hatart: [a, b] ");
    int a, b, input;
    scanf("%i%i", &a, &b);
    printf("Adj meg egy szamot:");
    scanf("%i", &input);
    printf("A beolvasott szam eleme [%i, %i] intervallumnak?\n", a, b);
    printf("Valasz: ");
    if(input >= a && input <= b) {
        printf("igen\n");
    }
    else {
        printf("nem\n");
    }

    printf("Adj meg egy osztot:");
    int divider;
    scanf("%i", &divider);
    printf("Az elso vagy a masodik szam oszthato a beolvasott szammal: ");
    if(number1 % divider == 0 || number2 % divider == 0) {
       printf("igaz");
    }
    else {
        printf("hamis");
    }

    ///Igazsagertek kiiratasa
    printf("Az elso szam paros: %i\n", (number1 % 2 == 0));
    printf("A masodik szam paratlan: %i\n", (number2 % 2 != 0));

    printf("Az elso szam paros: %i\n", !(number1 % 2));
    printf("A masodik szam paratlan: %i\n", (number2 % 2));

    //3-mal valo osztasi maradek egyenlo-e 0-val: ennek az igazsagerteke
    printf("%i\n", !(number1 % 3));
    //3-mal valo osztasi maradek kiiratasa
    printf("%i\n", (number1 % 3));
    printf("%i\n", number1 % 3);

    //kilepesi kod - exit code
    return 0;
}
