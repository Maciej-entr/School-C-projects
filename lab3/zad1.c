/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 3
Data:   14 listopada 2024 r.
Tytuł: Zadanie 1
*/


#include <stdio.h>
#include <locale.h> 
int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

int main() {
    przyklad();
    int rows,cols;

    
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &rows);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &cols);
    if(cols<=17){
        printf("   |");
    for (int i = 1; i <= cols; i++) {
        printf("%4d", i);
    }
    printf("\n");

    
    printf("---+");
    for (int i = 1; i <= cols; i++) {
        printf("----");
    }
    printf("\n");

    
    for (int i = 1; i <= rows; i++) {
        printf("%2d |", i);  
        for (int j = 1; j <= cols; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    }else{
        printf("Zbyt duza ilosc kolumn");
        
    }



    
    return 0;
}
