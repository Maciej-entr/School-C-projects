/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 3
Data:   14 listopada 2024 r.
Tytuł: Zadanie 3
*/
#include <stdio.h>
#include <math.h>
#include <locale.h> 

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}


int main() {
    przyklad();
    double eps, S1 = 0.0, S2 = 1.0, wyraz1, wyraz2 = 1.0;
    int k = 1;

    printf("Podaj dokladnosc eps (mniejsza od 0.1): ");
    scanf("%lf", &eps);

    do {
        wyraz1 = 4.0 * pow(-1, k+1) / (2*k - 1);
        S1 += wyraz1;
        k++;
    } while (fabs(wyraz1) >= eps);

    k = 1;

    do {
        wyraz2 /= k;
        S2 += wyraz2;
        k++;
    } while (fabs(wyraz2) >= eps);

    printf("Suma szeregu S1 (przybliza pi) = %.15f\n", S1);
    printf("Suma szeregu S2 (przybliza e) = %.15f\n", S2);

    return 0;
}
