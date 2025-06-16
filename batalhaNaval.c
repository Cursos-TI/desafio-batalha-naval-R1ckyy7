#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};
    int i;

    // Navio horizontal na linha 2 (posição Y = 1)
    for (i = 0; i < 3; i++) {
        tabuleiro[1][i] = 1;
    }

    // Navio vertical na coluna 4 (posição X = 3)
    for (i = 0; i < 3; i++) {
        tabuleiro[i][3] = 2;
    }

    printf("Coordenadas dos navios:\n");

    printf("\nNavio Horizontal:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", 1, i);
    }

    printf("\nNavio Vertical:\n");
    for (i = 0; i < 3; i++) {
        printf("(%d, %d)\n", i, 3);
    }

    return 0;
}
