/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 1
Data:   29 października 2024 r.
Tytuł: Zadanie 4
*/
#include<stdio.h>
#include <locale.h> 
#include<math.h>
int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

int main() {
    przyklad();
    double minPromien, maxPromien;
    int numWierszy;

    printf("Podaj minimalny promień: ");
    scanf("%lf", &minPromien);
    printf("Podaj maksymalny promień: ");
    scanf("%lf", &maxPromien);
    printf("Podaj liczbę wierszy tabeli: ");
    scanf("%d", &numWierszy);

    double krok = (maxPromien - minPromien) / (numWierszy - 1);
    
    printf("\n| Nr | Promień | Obwód       | Pole        |\n");
    printf("|----|---------|-------------|-------------|\n");

    for (int i = 0; i < numWierszy; i++) {
        double promien = minPromien + i * krok;
        double obwod = 2 * M_PI * promien;
        double pole = M_PI * promien * promien;

        printf("| %2d | %7.2f | %11.2f | %11.2f |\n", i + 1, promien, obwod, pole);
    }

    return 0;
}

