#include <stdio.h>

#define LINHAS1 5
#define COLUNAS1 5
#define LINHAS2 3
#define COLUNAS2 3

void sobreporMatrizes(int matriz1[LINHAS1][COLUNAS1], int matriz2[LINHAS2][COLUNAS2], int origemX, int origemY) {
    for (int i = 0; i < LINHAS2; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            if (origemX + i < LINHAS1 && origemY + j < COLUNAS1) {
                matriz1[origemX + i][origemY + j] = matriz2[i][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[LINHAS1][COLUNAS1]) {
    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS1; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[LINHAS1][COLUNAS1] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1}
    };

    int matriz2[LINHAS2][COLUNAS2] = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 2, 2}
    };

    int origemX = 1;
    int origemY = 1;

    printf("Matriz 1 antes da sobreposição:\n");
    imprimirMatriz(matriz1);

    sobreporMatrizes(matriz1, matriz2, origemX, origemY);

    printf("\nMatriz 1 após a sobreposição:\n");
    imprimirMatriz(matriz1);

    return 0;
}