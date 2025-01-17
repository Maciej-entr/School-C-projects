/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 15:15     (Poniedziałek nieparzysty godz 15:15)
Temat:  Lab 5
Data:   12 grudnia 2024 r.
Tytuł: Zadanie 1a
*/
#include <stdio.h>
#include <conio.h>
#include<locale.h>

int przyklad(){
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}
void Rownanie(float a, float b, float c)
{
    printf("Podaj wspolczynniki rownania (a * x + b * y = c) w postaci a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
}

void WypiszRozwiazanie(int N, float x, float y)
{
    switch(N)
    {
        case 2:
            printf("Uklad posiada nieskonczenie wiele rozwiazan.\n");
            break;
        case 1:
            printf("Uklad posiada jedno rozwiazanie:\n");
            printf("x = %.2f, y = %.2f\n", x, y);
            break;
        case 0:
            printf("Uklad nie posiada rozwiazan (jest sprzeczny).\n");
            break;
    }
}

float ObliczWyznacznik(float p1, float p2, float p3, float p4)
{
    return p1 * p4 - p2 * p3;
}


int Rozwiazanie(float a1, float b1, float c1,
                      float a2, float b2, float c2,
                      float x, float y)
{
    float W = ObliczWyznacznik(a1, b1, a2, b2); 
    float Wx = ObliczWyznacznik(c1, b1, c2, b2); 
    float Wy = ObliczWyznacznik(a1, c1, a2, c2); 

  
    if (W != 0)
    {
        x = Wx / W;
        y = Wy / W;
        return 1; 
    }
    else if (Wx == 0 && Wy == 0)
    {
        return 2; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    przyklad();
    float A1, B1, C1; 
    float A2, B2, C2; 
    float X, Y;       
    int N;            

    Rownanie(A1, B1, C1);
    Rownanie(A2, B2, C2);
    
    N = Rozwiazanie(A1, B1, C1, A2, B2, C2, X, Y);
    
    WypiszRozwiazanie(N, X, Y);
    
    getch(); 
    return 0;
}
