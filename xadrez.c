#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal superior direita (usando while)
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Espaço visual separando os movimentos anteriores do Cavalo
    printf("\n");

    // Movimento do Cavalo: 2 para baixo e 1 para a esquerda
    // Usando loops aninhados: for + while
    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop externo: movimento para baixo
    for (int b = 0; b < passosBaixo; b++) {
        printf("Baixo\n");
    }

    // Loop interno: movimento para a esquerda
    int e = 0;
    while (e < passosEsquerda) {
        printf("Esquerda\n");
        e++;
    }

    return 0;
}
