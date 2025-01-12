/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 11:15     (Poniedziałek nieparzysty godz 11:15)
Temat:  Lab 0
Data:   15 października 2024 r.
Tytuł: Zadanie 3 c
*/
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");
    printf("Autor: Maciej Waszyński (PN/NP 11:15) \n\n");
        return 0;
}

int main() {

    przyklad();
    float pole;
    float obwod;
    float promien;  

    
    printf("Podaj promien kola: ");
    scanf("%f", &promien);

   
    obwod = 2 * M_PI * promien;
    pole = M_PI * promien * promien;

    printf("Obwod kola o promieniu %.3f wynosi: %.3f\n", promien, obwod);
    printf("Pole powierzchni kola o promieniu %.3f wynosi: %.3f\n", promien, pole);

    return 0;
}
