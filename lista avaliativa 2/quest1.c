#include <stdio.h>

int main() {
    int valores[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", valores[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    
    printf("\n");

    int novoConjunto[9];
    int novoTam = 0;

    while (novoTam < 9) {
        for (int i = 0; i < 9 - novoTam; i++) {
            novoConjunto[i] = valores[i] + valores[i + 1];
        }

        for (int i = 0; i < 9 - novoTam; i++) {
            valores[i] = novoConjunto[i];
            printf("%d", novoConjunto[i]);
            if (i < 8 - novoTam) {
                printf(" ");
            }
        }

        printf("\n");

        novoTam++;
    }

    return 0;
}
