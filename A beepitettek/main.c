#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    ///szam deklaracioja es beolvasasa
    int number;
    printf("Adj meg egy szamot:");
    scanf("%i", &number);
    ///matematikai fuggvenyek
    printf("A beolvasott szam gyoke: %lf\n", sqrt(number));
    printf("A beolvasott szam abszolut erteke: %i\n", abs(number));

    double number2;
    printf("Adj meg egy valos szamot:");
    scanf("%lf", &number2);
    printf("A beolvasott szam abszolut erteke: %.2lf\n", fabs(number2));
    printf("A beolvasott szam kerekitve lefele: %.2lf\n", floor(number2));
    printf("A beolvasott szam kerekitve felfele: %.2lf\n", ceil(number2));
    printf("A beolvasott szam kerekitve: %.2lf\n", round(number2));
    printf("Az elso szam a masodik szam hatvanyan: %.2lf\n", pow(number, number2));

    return 0;
}
