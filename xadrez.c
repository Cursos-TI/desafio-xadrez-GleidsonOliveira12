#include <stdio.h>

// Função recursiva da Torre – anda sempre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Torre anda para Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva da Rainha – anda para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Rainha anda para Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva do Bispo – anda na diagonal (cima + direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Bispo anda: Cima e Direita\n");
    moverBispo(vertical - 1, horizontal - 1);
}

// Movimento do Cavalo – usando loops aninhados com controle de fluxo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Movimento em “L”: duas pra cima e uma pra direita
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (i == j) continue; // pula quando i == j, só pra variar o fluxo

            if (i == 2 && j == 1) {
                printf("Cavalo anda 2 casas para Cima e 1 para Direita\n");
                break; // sai do loop interno depois do movimento
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5, 5);
    printf("\n");

    moverCavalo();
    printf("\n");

    return 0;
}
