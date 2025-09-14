#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// ===============================================
// Função recursiva para a Torre (movimento horizontal)
// ===============================================
void moverTorre(int casas) {
    if (casas == 0) {
        return; // caso base: não há mais casas para mover
    }
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ===============================================
// Função recursiva para o Bispo (movimento diagonal)
// Inclui também loops aninhados para simular "Cima" + "Direita"
// ===============================================
void moverBispo(int casas) {
    if (casas == 0) {
        return; // caso base
    }

    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// ===============================================
// Função recursiva para a Rainha (movimento para esquerda)
// ===============================================
void moverRainha(int casas) {
    if (casas == 0) {
        return; // caso base
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ===============================================
// Movimento do Cavalo com loops aninhados complexos
// Duas casas para cima e uma para a direita
// ===============================================
void moverCavalo() {
    int movimentosVerticais = 2;   // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    // Loop externo controla vertical
    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Cima\n");

        // Loop interno só ativa no último movimento vertical
        for (int j = 0; j <= movimentosHorizontais; j++) {
            if (i < movimentosVerticais) {
                continue; // só executa o horizontal no último passo
            }
            if (j == 1) {
                printf("Direita\n");
                break; // sai após uma casa para a direita
            }
        }
    }
}

int main() {
 
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

        // ==============================
    // Movimento da Torre
    // ==============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ==============================
    // Movimento do Bispo
    // ==============================
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ==============================
    // Movimento da Rainha
    // ==============================
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ==============================
    // Movimento do Cavalo
    // ==============================
    printf("\n");
    moverCavalo();

    return 0;
}
