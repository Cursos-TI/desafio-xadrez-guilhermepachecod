#include <stdio.h>

int main() {
    // Quantidade de casas para movimentar cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentando a Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal: cima e direita)
    printf("\nMovimentando o Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentando a Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
