#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento vertical do Bispo
void moverBispoVertical(int casasRestantes);

// Função recursiva para o movimento horizontal do Bispo
void moverBispoHorizontal(int passoAtual, int totalCasas) {
    if (passoAtual >= totalCasas) return;
    printf("Cima Direita\n");
    moverBispoHorizontal(passoAtual + 1, totalCasas);
}

// Implementação da função vertical com chamada recursiva da horizontal
void moverBispoVertical(int casasRestantes) {
    if (casasRestantes == 0) return;
    moverBispoHorizontal(0, 1); // Move uma vez para cima e direita
    moverBispoVertical(casasRestantes - 1);
}

int main() {
    // Torre: movimento de 5 casas para a direita
    moverTorre(5);

    printf("\n");

    // Bispo: 5 casas na diagonal superior direita
    moverBispoVertical(5);

    printf("\n");

    // Rainha: 8 casas para a esquerda
    moverRainha(8);

    printf("\n");

    // Cavalo: 2 para cima e 1 para a direita
    int i, j;
    int movimentos = 3; // Apenas para simular o padrão com controle
    for (i = 0; i < movimentos; i++) {
        for (j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                continue;
            }
            if (j == 2) {
                printf("Direita\n");
                break;
            }
        }
        break; // Executa uma vez o movimento em L
    }

    return 0;
}
