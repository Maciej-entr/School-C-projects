/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 15:15     (Poniedziałek nieparzysty godz 15:15)
Temat:  Lab 5
Data:   12 grudnia 2024 r.
Tytuł: Zadanie 2
*/
#include <stdio.h>
#include <ctype.h>  
#include<locale.h>

int przyklad(){
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

int UsunCyfry(char *lancuch)
{
    int i = 0, j = 0;
    int liczbaUsunietych = 0;

    
    while (lancuch[i] != '\0')
    {
        
        if (isdigit(lancuch[i]))
        {
            liczbaUsunietych++;
        }
        else
        {
           
            lancuch[j] = lancuch[i];
            j++;
        }
        i++;
    }
    
    lancuch[j] = '\0';

    return liczbaUsunietych;
}

int main()
{
    przyklad();
    char lancuch[] = "Przykladowy1231414212 lancuch 1241241z 24141456 cyf142142rami789";
    
    printf("Przed usunieciem cyfr: %s\n", lancuch);

    int usuniete = UsunCyfry(lancuch);
    
    printf("Po usunieciu cyfr: %s\n", lancuch);
    printf("Liczba usunietych cyfr: %d\n", usuniete);

    return 0;
}
