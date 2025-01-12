/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 15:15     (Poniedziałek nieparzysty godz 15:15)
Temat:  Lab 5
Data:   12 grudnia 2024 r.
Tytuł: Zadanie 3
*/
#include <stdio.h>
#include<locale.h>

int przyklad(){
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}

char* UsunKomentarze(char *lancuch)
{
    int i = 0, j = 0;
    int KomentarzBlokowy = 0;
    int KomentarzLiniowy = 0;

    while (lancuch[i] != '\0') 
    {
        
        if (lancuch[i] == '/' && lancuch[i + 1] == '*' && !KomentarzLiniowy)
        {
            KomentarzBlokowy = 1;
            i += 2;  
        }
        
        else if (lancuch[i] == '*' && lancuch[i + 1] == '/' && KomentarzBlokowy)
        {
            KomentarzBlokowy = 0;
            i += 2;  
        }
        
        else if (lancuch[i] == '/' && lancuch[i + 1] == '/' && !KomentarzBlokowy)
        {
            KomentarzLiniowy = 1;
            i += 2;  
        }
        
        else if (KomentarzBlokowy)
        {
            i++;  
        }
        
        else if (KomentarzLiniowy)
        {
            if (lancuch[i] == '\n') 
            {
                KomentarzLiniowy = 0;
                lancuch[j++] = lancuch[i];  
            }
            i++;
        }
        
        else
        {
            lancuch[j++] = lancuch[i++];
        }
    }

    
    lancuch[j] = '\0';
    
    return lancuch;
}

int main()
{
    przyklad();
   
    char lancuch[] = "Kod przed /* blokowy komentarz */ kod po // komentarz liniowy\nDalszy kod";
    
    printf("Przed usunieciem komentarzy:\n%s\n", lancuch);

    UsunKomentarze(lancuch);
    
    printf("\nPo usunieciu komentarzy:\n%s\n", lancuch);

    return 0;
}
