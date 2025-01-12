/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 11:15     (Poniedziałek nieparzysty godz 11:15)
Temat:  Lab 0
Data:   15 października 2024 r.
Tytuł: Zadanie 1 a
*/

#include <iostream>
#include <locale>  

using namespace std;

int przyklad()
{
    setlocale(LC_CTYPE, "Polish");  
    cout << "Autor: Maciej Waszyński (PN/NP 11:15)" << endl << endl;
    return 0;
}

int main() {
    przyklad(); 

    cout << "Wizytówka 1:" << endl;
    cout << "Imię i nazwisko: Maciejka Waszyńska" << endl;
    cout << "Adres: Wilenska 1, Kołobrzeg" << endl;
    cout << "Nr telefonu: 184 244 214" << endl;
    cout << "Adres email: lab@email.com" << endl;
    
    return 0;
}
