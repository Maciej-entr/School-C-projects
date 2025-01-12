/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 11:15     (Poniedziałek nieparzysty godz 11:15)
Temat:  Lab 0
Data:   15 października 2024 r.
Tytuł: Zadanie 2 (studio.h)
*/

#include <stdio.h>
#include <locale.h>

int a;
int b;
int c;
int suma;
float srednia;
int iloczyn;

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");
    printf("Autor: Maciej Waszyński (PN/NP 11:15) \n\n");
    return 0;
}

int main()
{
    przyklad();

    printf("Wprowadz a: ");
    scanf("%d", &a);

    printf("Wprowadz b: ");
    scanf("%d", &b);

    printf("Wprowadz c: ");
    scanf("%d", &c);

    suma = a + b + c;
    iloczyn = a * b * c;
    srednia = (float)(a + b + c) / 3;  

    printf("Suma a,b,c wynosi: %d\n", suma);
    printf("Iloczyn a,b,c wynosi: %d\n", iloczyn);
    printf("Srednia arytmetyczna a,b,c wynosi: %.2f\n", srednia);

    return 0;
}
