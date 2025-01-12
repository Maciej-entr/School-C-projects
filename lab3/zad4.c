/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 3
Data:   14 listopada 2024 r.
Tytuł: Zadanie 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

void oblicz_srednia() {
    int min, max, n;
    int liczba, suma_dodatnie = 0, suma_ujemne = 0;
    int liczba_dodatnie = 0, liczba_ujemne = 0;

    srand(time(NULL));

    printf("Podaj dolna granice przedzialu (min): ");
    scanf("%d", &min);
    printf("Podaj gorna granice przedzialu (max): ");
    scanf("%d", &max);
    printf("Podaj ilosc liczb do wygenerowania: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        liczba = min + rand() % (max - min + 1);
        printf("Wygenerowana liczba: %d\n", liczba);

        if (liczba > 0) {
            suma_dodatnie += liczba;
            liczba_dodatnie++;
        } else if (liczba < 0) {
            suma_ujemne += liczba;
            liczba_ujemne++;
        }
    }

    if (liczba_dodatnie > 0) {
        printf("\nLiczb dodatnich: %d, srednia dodatnich: %.2f\n", liczba_dodatnie, (float)suma_dodatnie / liczba_dodatnie);
    } else {
        printf("\nBrak liczb dodatnich.\n");
    }

    if (liczba_ujemne > 0) {
        printf("Liczb ujemnych: %d, srednia ujemnych: %.2f\n", liczba_ujemne, (float)suma_ujemne / liczba_ujemne);
    } else {
        printf("Brak liczb ujemnych.\n");
    }
}

int main() {
    przyklad();
    oblicz_srednia();
    return 0;
}
