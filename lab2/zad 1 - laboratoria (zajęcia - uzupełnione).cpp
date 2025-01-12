/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 13:15     (Poniedziałek nieparzysty godz 13:15)
Temat:  Lab 1
Data:   29 października 2024 r.
Tytuł: Zadanie 1 
*/
#include<stdio.h>
#include<math.h>
#include <locale.h> 
int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 13:15)\n\n");
    return 0;
}


int main() {
	przyklad();
	int a, b, c, delta;
    float x1,x2;

	printf("Wprowadz wartosc dla a:");
	scanf("%d", &a);
	if(a != 0){

    printf("Wprowadz wartosc dla b:");
	scanf("%d", &b);

	printf("Wprowadz wartosc dla c:");
	scanf("%d", &c);

	delta = b ^ 2 - 4 * (a * c);
	x1 = (float)(-b - sqrt(delta)) / 2 * a;
	x2 = (float)(-b + sqrt(delta)) / 2 * a;
	
	if (delta >= 0) {
		printf("delta jest rowna: %.d\n", delta);
		printf("x1 rowna sie %.2f\n", x1);
		printf("x2 rowna sie %.2f\n", x2);
	
	}
	else
		printf("Wyrazenie nie ma rozwiazan");
	}else
	printf("Nie jest to funkcja kwadratowa");
	
	
	return 0;



}