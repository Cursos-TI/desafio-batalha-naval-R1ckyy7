#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int i;

    // Navio horizontal
    for (i = 0; i < 4; i++) {
        tabuleiro[2][i] = 3;
    }

    // Navio vertical
    for (i = 0; i < 4; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio diagonal principal
    for (i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária
    for (i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    printf("Tabuleiro completo (0 = água, 3 = navio):\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}