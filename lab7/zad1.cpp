/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 15:15     (Poniedziałek nieparzysty godz 15:15)
Temat:  Lab 7
Data:   24 stycznia 2025 r.
Tytuł: Zadanie 1
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

#define MAX_NAME_LENGTH 81


int przyklad(){
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 15:15)\n\n");
    return 0;
}

#define MAX_NAZWA 20

typedef struct {
    char nazwa[MAX_NAZWA];
    float cena;
    int ilosc;
} Towar;

void utworzTablice(Towar **Tab, int *Rozmiar) {
    if (*Tab != NULL) {
        free(*Tab);
    }

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", Rozmiar);

    *Tab = (Towar *)calloc(*Rozmiar, sizeof(Towar));
    if (*Tab == NULL) {
        printf("Błąd alokacji pamięci!\n");
        exit(1);
    }

    for (int i = 0; i < *Rozmiar; i++) {
        printf("Podaj nazwę towaru %d: ", i + 1);
        scanf("%s", &(*Tab)[i].nazwa);
        printf("Podaj cenę towaru %d: ", i + 1);
        scanf("%f", &(*Tab)[i].cena);
        printf("Podaj ilość towaru %d: ", i + 1);
        scanf("%d", &(*Tab)[i].ilosc);
    }
}

void wyswietlTablice(Towar *Tab, int Rozmiar) {
    if (Tab == NULL) {
        printf("Brak tablicy\n");
        return;
    }

    printf("Nazwa\tCena\tIlość\n");
    for (int i = 0; i < Rozmiar; i++) {
        printf("%s\t%.2f\t%d\n", Tab[i].nazwa, Tab[i].cena, Tab[i].ilosc);
    }
}

void dodajTowar(Towar **Tab, int *Rozmiar) {
    *Tab = (Towar *)realloc(*Tab, (*Rozmiar + 1) * sizeof(Towar));
    if (*Tab == NULL) {
        printf("Błąd alokacji pamięci!\n");
        exit(1);
    }

    printf("Podaj nazwę nowego towaru: ");
    scanf("%s", (*Tab)[*Rozmiar].nazwa);
    printf("Podaj cenę nowego towaru: ");
    scanf("%f", &(*Tab)[*Rozmiar].cena);
    printf("Podaj ilość nowego towaru: ");
    scanf("%d", &(*Tab)[*Rozmiar].ilosc);

    (*Rozmiar)++;
}

void usunTowar(Towar **Tab, int *Rozmiar, int indeks) {
    if (indeks < 0 || indeks >= *Rozmiar) {
        printf("Nieprawidłowy indeks\n");
        return;
    }

    for (int i = indeks; i < *Rozmiar - 1; i++) {
        (*Tab)[i] = (*Tab)[i + 1];
    }

    *Tab = (Towar *)realloc(*Tab, (*Rozmiar - 1) * sizeof(Towar));
    (*Rozmiar)--;
}

void zwolnijTablice(Towar **Tab, int *Rozmiar) {
    if (*Tab == NULL) {
        printf("Brak tablicy\n");
        return;
    }

    free(*Tab);
    *Tab = NULL;
    *Rozmiar = 0;
}

int main() {
    Towar *Tab = NULL;
    int Rozmiar = 0;
    int wybor;
    przyklad();

    do {
        printf("\nMenu:\n");
        printf("1. Utwórz tablicę\n");
        printf("2. Wyświetl tablicę\n");
        printf("3. Dodaj towar\n");
        printf("4. Usuń towar\n");
        printf("5. Zwolnij tablicę\n");
        printf("6. Wyjdź\n");
        printf("Aktualny adres tablicy: %p\n", (void *)Tab);
        printf("Aktualny rozmiar tablicy: %d\n", Rozmiar);
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                utworzTablice(&Tab, &Rozmiar);
                break;
            case 2:
                wyswietlTablice(Tab, Rozmiar);
                break;
            case 3:
                dodajTowar(&Tab, &Rozmiar);
                break;
            case 4: {
                int indeks;
                printf("Podaj indeks towaru do usunięcia: ");
                scanf("%d", &indeks);
                usunTowar(&Tab, &Rozmiar, indeks);
                break;
            }
            case 5:
                zwolnijTablice(&Tab, &Rozmiar);
                break;
            case 6:
                printf("Koniec programu\n");
                break;
            default:
                printf("Nieprawidłowy wybór\n");
        }
    } while (wybor != 6);

    return 0;
}