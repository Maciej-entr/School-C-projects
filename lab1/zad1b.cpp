/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 11:15     (Poniedziałek nieparzysty godz 11:15)
Temat:  Lab 0
Data:   15 października 2024 r.
Tytuł: Zadanie 1 b
*/

#include <stdio.h>
#include <locale.h>  

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 11:15)\n\n");
    return 0;
}

int main() {
    przyklad(); 

    printf("Wizytówka 1:\n");
    printf("Imię i nazwisko: Maciejka Waszyńska\n");
    printf("Adres: Wilenska 1, Kołobrzeg\n");
    printf("Nr telefonu: 184 244 214\n");
    printf("Adres email: lab@email.com\n\n\n");
    
    printf("Wizytówka 2:\n");
    printf("Imię i nazwisko: Maciej Waszyński\n");
    printf("Adres: fiolkowa 3, Kołobrzeg\n");
    printf("Nr telefonu: 232 213 532\n");
    printf("Adres email: lab2@email.com\n");
    
    return 0;
}
