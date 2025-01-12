/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 3
Data:   14 listopada 2024 r.
Tytuł: Zadanie 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

#define ROZMIAR 5

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

float tab[ROZMIAR];

void wczytajtablice() {
    for (int i = 0; i < ROZMIAR; i++) {
        printf("Tab[%d] = ", i);
        scanf("%f", &tab[i]);
    }
}

void wypisztablice() {
    printf("Tab = [ ");
    for (int i = 0; i < ROZMIAR; i++) {
        printf("%.1f  ", tab[i]);
    }
    printf("]\n");
}

void analizujliczby() {
    int liczbadodatnich = 0, liczbaujemnych = 0;
    float sumadodatnich = 0.0, sumaujemnych = 0.0;
    for (int i = 0; i < ROZMIAR; i++) {
        if (tab[i] > 0) {
            liczbadodatnich++;
            sumadodatnich += tab[i];
        } else if (tab[i] < 0) {
            liczbaujemnych++;
            sumaujemnych += tab[i];
        }
    }
    float sredniadodatnich = liczbadodatnich > 0 ? sumadodatnich / liczbadodatnich : 0.0;
    float sredniaujemnych = liczbaujemnych > 0 ? sumaujemnych / liczbaujemnych : 0.0;
    printf("Liczba dodatnich: %d\n", liczbadodatnich);
    printf("Liczba ujemnych: %d\n", liczbaujemnych);
    printf("Suma dodatnich: %.1f\n", sumadodatnich);
    printf("Suma ujemnych: %.1f\n", sumaujemnych);
    printf("Średnia dodatnich: %.1f\n", sredniadodatnich);
    printf("Średnia ujemnych: %.1f\n", sredniaujemnych);
}

void sprawdzporządek() {
    int rosnąco = 1, malejąco = 1, jednakowe = 1;
    for (int i = 1; i < ROZMIAR; i++) {
        if (tab[i] < tab[i - 1]) {
            rosnąco = 0;
        }
        if (tab[i] > tab[i - 1]) {
            malejąco = 0;
        }
        if (tab[i] != tab[i - 1]) {
            jednakowe = 0;
        }
    }
    if (rosnąco) {
        printf("Tablica jest uporządkowana rosnąco.\n");
    } else if (malejąco) {
        printf("Tablica jest uporządkowana malejąco.\n");
    } else if (jednakowe) {
        printf("Wszystkie elementy są jednakowe.\n");
    } else {
        printf("Elementy tablicy są nieuporządkowane.\n");
    }
}

void losujtablice() {
    float min, max;
    printf("Podaj dolną granicę zakresu: ");
    scanf("%f", &min);
    printf("Podaj górną granicę zakresu: ");
    scanf("%f", &max);

    srand(time(NULL));
    for (int i = 0; i < ROZMIAR; i++) {
        tab[i] = min + (max - min) * rand() / ((float)RAND_MAX);
    }

    printf("Tablica została wypełniona liczbami losowymi.\n");
}

int main() {
    przyklad();
    int wybor;
    do {
        printf("\nMenu:\n");
        printf("1. Wczytaj elementy tablicy\n");
        printf("2. Wypisz elementy tablicy\n");
        printf("3. Analizuj liczby dodatnie i ujemne\n");
        printf("4. Sprawdz porządek elementów\n");
        printf("5. Losuj elementy tablicy\n");
        printf("6. Wyjście\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);
        switch (wybor) {
            case 1:
                wczytajtablice();
                break;
            case 2:
                wypisztablice();
                break;
            case 3:
                analizujliczby();
                break;
            case 4:
                sprawdzporządek();
                break;
            case 5:
                losujtablice();
                break;
            case 6:
                printf("Koniec programu.\n");
                break;
            default:
                printf("Niepoprawny wybór.\n");
        }
    } while (wybor != 6);
    return 0;
}
