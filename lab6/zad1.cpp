/*
Autor:  Maciej Waszyński
Grupa:  PN/NP 15:15     (Poniedziałek nieparzysty godz 15:15)
Temat:  Lab 6
Data:   22 grudnia 2024 r.
Tytuł: Zadanie 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

#define MAX_NAME_LENGTH 81


int przyklad(){
    setlocale(LC_CTYPE, "Polish");  
    printf("Autor: Maciej Waszyński (PN/NP 15:15)\n\n");
    return 0;
}

//void InitTab(char **wsk);
//void AddName(char *buf, char **wsk, unsigned n);
//void RemoveName(int nr, char **wsk, unsigned n);
//void RemoveName(char *buf, char **wsk, unsigned n);
//void PrintAllNames(char **wsk, unsigned n);
//void PrintNames(char first_letter, char **wsk, unsigned n);
//void SortAlphabet(char **wsk, unsigned n);
//void SortLength(char **wsk, unsigned n);

void InitTab(char ***wsk) {
    *wsk = NULL;
}


void AddName(char *buf, char ***wsk, unsigned *n) {
    char **tmp = (char **)realloc(*wsk, (*n + 1) * sizeof(char *));
    if (tmp == NULL) {
        printf("Błąd alokacji pamięci!\n");
        return;
    }
    *wsk = tmp;
    (*wsk)[*n] = (char *)malloc((strlen(buf) + 1) * sizeof(char));
    strcpy((*wsk)[*n], buf);
    (*n)++;
}


void RemoveNameByIndex(int nr, char ***wsk, unsigned *n) {
    if (nr < 0 || nr >= *n) {
        printf("Niepoprawny indeks!\n");
        return;
    }

    free((*wsk)[nr]);

    for (unsigned i = nr; i < *n - 1; i++) {
        (*wsk)[i] = (*wsk)[i + 1];
    }

    *wsk = (char **)realloc(*wsk, (*n - 1) * sizeof(char *));
    (*n)--;
    printf("Imię zostało usunięte.\n");
}


void RemoveNameByName(char *buf, char ***wsk, unsigned *n) {
    for (unsigned i = 0; i < *n; i++) {
        if (strcmp((*wsk)[i], buf) == 0) {
            RemoveNameByIndex(i, wsk, n);
            printf("Imię %s zostało usunięte.\n", buf);
            return;
        }
    }
    printf("Imię %s nie zostało znalezione.\n", buf);
}


void PrintAllNames(char **wsk, unsigned n) {
    if (n == 0) {
        printf("Brak imion w słowniku.\n");
        return;
    }
    for (unsigned i = 0; i < n; i++) {
        printf("%d. %s\n", i, wsk[i]);
    }
}


void PrintNames(char first_letter, char **wsk, unsigned n) {
    int found = 0;
    for (unsigned i = 0; i < n; i++) {
        if (wsk[i][0] == first_letter) {
            printf("%s\n", wsk[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Brak imion zaczynających się na literę '%c'.\n", first_letter);
    }
}


void SortAlphabet(char **wsk, unsigned n) {
    for (unsigned i = 0; i < n - 1; i++) {
        for (unsigned j = 0; j < n - i - 1; j++) {
            if (strcmp(wsk[j], wsk[j + 1]) > 0) {
                char *temp = wsk[j];
                wsk[j] = wsk[j + 1];
                wsk[j + 1] = temp;
            }
        }
    }
    printf("Imiona zostały posortowane alfabetycznie.\n");
}


void SortLength(char **wsk, unsigned n) {
    for (unsigned i = 0; i < n - 1; i++) {
        for (unsigned j = 0; j < n - i - 1; j++) {
            if (strlen(wsk[j]) > strlen(wsk[j + 1])) {
                char *temp = wsk[j];
                wsk[j] = wsk[j + 1];
                wsk[j + 1] = temp;
            }
        }
    }
    printf("Imiona zostały posortowane według długości.\n");
}


int main() {
    przyklad();
    char **WSK;              
    char buf[MAX_NAME_LENGTH]; 
    unsigned N = 0;           
    char choice;
    char first_letter;

    InitTab(&WSK);             

    while (1) {
        printf("\nMENU:\n");
        printf("1. Dodaj imię\n");
        printf("2. Wyświetl wszystkie imiona\n");
        printf("3. Wyświetl imiona zaczynające się na literę\n");
        printf("4. Usuń imię na podstawie indeksu\n");
        printf("5. Usuń imię podane z klawiatury\n");
        printf("6. Posortuj imiona alfabetycznie\n");
        printf("7. Posortuj imiona według długości\n");
        printf("8. Wyjście\n");
        printf("Wybierz opcję: ");
        choice = getchar();
        getchar(); 

        switch (choice) {
            case '1':
                printf("Wprowadź imię: ");
                fgets(buf, MAX_NAME_LENGTH, stdin);
                buf[strcspn(buf, "\n")] = 0;
                AddName(buf, &WSK, &N);
                break;
            case '2':
                PrintAllNames(WSK, N);
                break;
            case '3':
                printf("Podaj literę: ");
                scanf(" %c", &first_letter);
                getchar(); 
                PrintNames(first_letter, WSK, N);
                break;
            case '4': {
                int idx;
                printf("Podaj indeks imienia do usunięcia: ");
                scanf("%d", &idx);
                getchar(); 
                RemoveNameByIndex(idx, &WSK, &N);
                break;
            }
            case '5':
                printf("Wprowadź imię do usunięcia: ");
                fgets(buf, MAX_NAME_LENGTH, stdin);
                buf[strcspn(buf, "\n")] = 0; 
                RemoveNameByName(buf, &WSK, &N);
                break;
            case '6':
                SortAlphabet(WSK, N);
                break;
            case '7':
                SortLength(WSK, N);
                break;
            case '8':
                
                for (unsigned i = 0; i < N; i++) {
                    free(WSK[i]);
                }
                free(WSK);
                printf("Zakończono program.\n");
                return 0;
            default:
                printf("Niepoprawny wybór.\n");
                break;
        }
    }

    return 0;
}
