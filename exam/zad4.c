#include <stdio.h>

void IABELKA(int wiersze, int kolumny) {
    printf("#=====");
    for (int i = 1; i <= kolumny; i++) {
        printf("|=====");
    }
    printf("|\n");

    printf("#     ");
    for (int i = 1; i <= kolumny; i++) {
        printf("|%4d ", i);
    }
    printf("|\n");

    printf("|---=======");
    for (int i = 1; i <= kolumny; i++) {
        printf("|=====");
    }
    printf("|\n");

    for (int i = 1; i <= wiersze; i++) {
        printf("|%2d #", i);
        for (int j = 1; j <= kolumny; j++) {
            printf("%4d |", i * j);
        }
        printf("\n");

        if (i < wiersze) {
            printf("|---=======");
            for (int j = 1; j <= kolumny; j++) {
                printf("|=====");
            }
            printf("|\n");
        }
    }

    printf("#=====");
    for (int i = 1; i <= kolumny; i++) {
        printf("|=====");
    }
    printf("|\n");
}

int main() {
    int wiersze, kolumny;
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &wiersze);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &kolumny);

    IABELKA(wiersze, kolumny);

    return 0;
}