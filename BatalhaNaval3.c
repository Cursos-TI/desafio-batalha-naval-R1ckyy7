#include <stdio.h>

void exibirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Habilidade Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    // Habilidade Cruz
    for (int j = 0; j < 5; j++) cruz[2][j] = 1;  // Linha central
    for (int i = 0; i < 5; i++) cruz[i][2] = 1;  // Coluna central

    // Habilidade Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Habilidade em Cone:\n");
    exibirMatriz(cone);

    printf("Habilidade em Cruz:\n");
    exibirMatriz(cruz);

    printf("Habilidade em Octaedro:\n");
    exibirMatriz(octaedro);

    return 0;
}