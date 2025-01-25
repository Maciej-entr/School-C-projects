#include <stdio.h>
#include <math.h>


double sumA_SZEREGU(double EPS) {
    double suma = 0.0;
    int k = 1;
    double wyraz;

    do {
        wyraz = pow(-1, k - 1) * 4.0 / (2 * k - 1);
        suma += wyraz;
        k++;
    } while (fabs(wyraz) >= EPS);

    return suma;
}

int main() {
    double EPS;


    printf("Podaj dokładność EPS (0 < EPS < 1): ");
    scanf("%lf", &EPS);


    if (EPS <= 0.0 || EPS >= 1.0) {
        printf("EPS musi być większe od 0 i mniejsze od 1.\n");
        return 1;
    }

    
    double wynik = sumA_SZEREGU(EPS);
    printf("Suma szeregu z dokładnością %.10lf wynosi: %.10lf\n", EPS, wynik);

    return 0;
}