#include <stdio.h>
#include <string.h>


void USUM_SANOGLOSKI(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && 
            str[i] != 'o' && str[i] != 'u' && str[i] != 'y') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char lancuch[36];

    
    printf("Podaj łańcuch znaków (max 35 znaków): ");
    fgets(lancuch, sizeof(lancuch), stdin);

    
    size_t len = strlen(lancuch);
    if (len > 0 && lancuch[len - 1] == '\n') {
        lancuch[len - 1] = '\0';
    }

    
    USUM_SANOGLOSKI(lancuch);

  
    printf("Łańcuch po usunięciu samogłosek: %s\n", lancuch);

    return 0;
}