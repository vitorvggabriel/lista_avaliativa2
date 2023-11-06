#include <stdio.h>
#include <string.h>

int main() {
    int matrizA[4][4], matrizB[4][4], resultado[4][4];
    char operacao[10];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(operacao, "soma") == 0) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            } else if (strcmp(operacao, "sub") == 0) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (strcmp(operacao, "mult") == 0) {
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }
    }

    // Impressão
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
