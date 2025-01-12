/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 1
Data:   29 października 2024 r.
Tytuł: Zadanie 3
*/
#include<stdio.h>
#include <locale.h> 
#include<math.h>
int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}


int czyTrojkat(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int czyRownoboczny(double a, double b, double c) {
    return (a == b && b == c);
}

int czyRownoramienny(double a, double b, double c) {
    return (a == b || b == c || a == c);
}

int czyProstokatny(double a, double b, double c) {
    double a2 = a * a, b2 = b * b, c2 = c * c;
    return (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2);
}

int czyOstrokatny(double a, double b, double c) {
    double a2 = a * a, b2 = b * b, c2 = c * c;
    return (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2);
}

int czyRozwartokatny(double a, double b, double c) {
    double a2 = a * a, b2 = b * b, c2 = c * c;
    return (a2 + b2 < c2 || a2 + c2 < b2 || b2 + c2 < a2);
}

int main() {
    przyklad();
    double a, b, c;

    printf("Podaj długości boków trójkąta:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    if (czyTrojkat(a, b, c)) {
        printf("Można utworzyć trójkąt.\n");

        if (czyRownoboczny(a, b, c)) {
            printf("Trójkąt równoboczny.\n");
        } else if (czyRownoramienny(a, b, c)) {
            printf("Trójkąt równoramienny.\n");
        } else {
            printf("Trójkąt różnoboczny.\n");
        }

        if (czyProstokatny(a, b, c)) {
            printf("Trójkąt prostokątny.\n");
        } else if (czyOstrokatny(a, b, c)) {
            printf("Trójkąt ostrokątny.\n");
        } else if (czyRozwartokatny(a, b, c)) {
            printf("Trójkąt rozwartokątny.\n");
        }
    } else {
        printf("Nie można utworzyć trójkąta.\n");
    }

    return 0;
}
