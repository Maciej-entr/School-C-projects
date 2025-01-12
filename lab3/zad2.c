/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 3
Data:   14 listopada 2024 r.
Tytuł: Zadanie 2
*/
#include <stdio.h>
#include <locale.h> 

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

double oblicz_sume_cyfr(double liczba) {
    double suma = 0;

    while (liczba > 0) {
        
        suma += (int)liczba % 10;
        
        liczba = (int)liczba / 10;
    }

    return suma;
}

int main() {
    przyklad();
    double liczba;


    printf("Podaj duza liczbe calkowita dodatnia: ");
    scanf("%lf", &liczba);


    double suma_dziesietna = oblicz_sume_cyfr(liczba);
    printf("Suma cyfr w systemie dziesietnym: %.0lf\n", suma_dziesietna);

    return 0;
}
