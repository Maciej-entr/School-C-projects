/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 1
Data:   29 października 2024 r.
Tytuł: Zadanie 2
*/
#include<stdio.h>
#include <locale.h> 
int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

int czyRokPrzestepny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int czyPoprawnaData(int dzien, int miesiac, int rok) {
    int dniWMmiesiacu = 31;

    if (miesiac < 1 || miesiac > 12) {
        return 0;
    }

    if (miesiac == 4 , miesiac == 6 , miesiac == 9 , miesiac == 11) {
        dniWMmiesiacu = 30;
    } else if (miesiac == 2) {
        if (czyRokPrzestepny(rok)) {
            dniWMmiesiacu = 29;
        } else {
            dniWMmiesiacu = 28;
        }
    }

    if (dzien < 1 , dzien > dniWMmiesiacu) {
        return 0;
    }

    return 1;
}

int main() {
    przyklad();
    int dzien, miesiac, rok;

    printf("Podaj dzień: ");
    scanf("%d", &dzien);
    printf("Podaj miesiąc: ");
    scanf("%d", &miesiac);
    printf("Podaj rok: ");
    scanf("%d", &rok);

    printf("Podana data: %02d-%02d-%d\n", dzien, miesiac, rok);

    if (czyPoprawnaData(dzien, miesiac, rok)) {
        printf("Data jest poprawna.\n");
    } else {
        printf("Data jest niepoprawna.\n");
    }

    return 0;
}

