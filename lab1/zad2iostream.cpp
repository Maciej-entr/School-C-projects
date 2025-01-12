/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 11:15     (Poniedziałek nieparzysty godz 11:15)
Temat:  Lab 0
Data:   15 października 2024 r.
Tytuł: Zadanie 2 (iostream)
*/

#include <iostream> 
#include <locale>    

using namespace std;

int a;
int b;
int c;
int suma;
float srednia;
int iloczyn;

int przyklad()
{
    
    setlocale(LC_CTYPE, "Polish");

    
    cout << "Autor: Maciej Waszyński (PN/NP 11:15)" << endl;
    return 0;
}

int main()
{
    przyklad();

    cout << "Wprowadz a: ";
    cin >> a;
    

    cout << "Wprowadz b: ";
    cin >> b;
   

    cout << "Wprowadz c: ";
    cin >> c;
  

    suma = a + b + c;
    iloczyn = a * b * c;
    srednia = (a + b + c) / 3;  

    cout << "Suma a,b,c wynosi: " << suma << endl;
    cout << "Iloczyn a,b,c wynosi: " << iloczyn << endl;
    cout << "Srednia arytmetyczna a,b,c wynosi: " << srednia << endl;

    return 0;
}
