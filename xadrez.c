#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // ==============================
    // Movimento do BISPO (while loop)
    // ==============================
    int casasBispo = 5; // número de casas que o bispo se moverá
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // ==============================
    // Movimento da TORRE (for loop)
    // ==============================
    int casasTorre = 5; // número de casas que a torre se moverá
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // ==============================
    // Movimento da RAINHA (do-while loop)
    // ==============================
    int casasRainha = 8; // número de casas que a rainha se moverá
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // ==============================
    // Movimento do CAVALO (loops aninhados: for + while)
    // ==============================
    int movimentosVerticais = 2;   // Cavalo se move 2 casas para baixo
    int movimentosHorizontais = 1; // Cavalo se move 1 casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) controla os movimentos verticais (para baixo)
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Baixo\n");

        // Loop interno (while) controla o movimento horizontal (para a esquerda)
        int j = 0;
        while (j < movimentosHorizontais && i == movimentosVerticais - 1) {
            // Só executa quando terminar os movimentos verticais
            printf("Esquerda\n");
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
