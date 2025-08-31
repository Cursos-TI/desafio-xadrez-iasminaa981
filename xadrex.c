#include <stdio.h>

int main() {
    // Constantes para quantidade de movimentos
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    int i;

    // ------------------------
    // Movimentos do Bispo
    // ------------------------
    printf("Movimentos do Bispo (diagonal superior direita):\n");

    // usando for
    for (i = 0; i < movimentos_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // ------------------------
    // Movimentos da Torre
    // ------------------------
    printf("Movimentos da Torre (direita):\n");

    // usando while
    i = 0;
    while (i < movimentos_torre) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // ------------------------
    // Movimentos da Rainha
    // ------------------------
    printf("Movimentos da Rainha (esquerda):\n");

    // usando do...while
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);

    printf("\n");

    return 0;
}
