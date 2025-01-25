#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void IABLICA_IWO(float *tablica) {
    srand(time(NULL)); 

  
    for (int i = 0; i < 10; i++) {
        tablica[i] = (float)(rand() % 51);
    }


    printf("Tablica po losowaniu (IABLICA_IWO):\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    float min = tablica[0];
    float max = tablica[0];
    for (int i = 1; i < 10; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }

    printf("Wartość minimalna: %.2f\n", min);
    printf("Wartość maksymalna: %.2f\n", max);
}


void IABLICA_WSK(float *tablica) {
    srand(time(NULL)); 

    
    for (int i = 0; i < 10; i++) {
        *(tablica + i) = (float)(rand() % 51);
    }

 
    printf("Tablica po losowaniu (IABLICA_WSK):\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", *(tablica + i));
    }
    printf("\n");

   
    float min = *tablica;
    float max = *tablica;
    for (int i = 1; i < 10; i++) {
        if (*(tablica + i) < min) {
            min = *(tablica + i);
        }
        if (*(tablica + i) > max) {
            max = *(tablica + i);
        }
    }

   
    printf("Wartość minimalna: %.2f\n", min);
    printf("Wartość maksymalna: %.2f\n", max);
}

int main() {
    float tablica[10];

    
    printf("Funkcja IABLICA_IWO:\n");
    IABLICA_IWO(tablica);

    
    printf("\nFunkcja IABLICA_WSK:\n");
    IABLICA_WSK(tablica);

    return 0;
}