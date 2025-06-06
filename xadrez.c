#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
   int i = 0, b = 0, r = 0;
    // Implementação de Movimentação do Bispo
    // Movimento do BISPO usando While

    printf("\nBISPO\n");
    
    while (b < 5)
    {
        printf("Cima, Direita\n");
        b++;
    }
    
    // Implementação de Movimentação da Torre
    // Movimento da Torre usando for

    printf("\nTORRE\n");

    for ( i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Rainha
    // Movimento da RAINHA usando o do while
    
    printf("\nRAINHA\n");

    do
    {
        printf("Esquerda\n");
        r++;
    }while (r < 8);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
