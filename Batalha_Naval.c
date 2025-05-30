#include <stdio.h>

int main() {
    
    // Representação do tabuleiro como uma matriz 10x10
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,3,0,0,0,0,0},
        {0,0,0,0,3,0,0,0,0,0},
        {0,0,0,0,3,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,3,3,3,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    // 0 representa água, 3 representa um navio
    // Imprime uma mensagem de boas-vindas
    printf("\nTabuleiro inicial:\n\n");
    // Imprime o cabeçalho do tabuleiro
    printf("  x A B C D E F G H I J\n");
    
    // Imprime o tabuleiro
    int i, j; // Variáveis de controle para os loops
    for (i = 0; i < 10; i++) { // Loop para cada linha do tabuleiro
        // Imprime o número da linha
        printf("%2d| ", i + 1); // Adiciona 1 para que a contagem comece em 1
        // Loop para cada coluna do tabuleiro
        for (j = 0; j < 10; j++) {
            // Imprime o valor da célula do tabuleiro
            printf("%d ", tabuleiro[i][j]); //
        }
        // Imprime uma nova linha após cada linha do tabuleiro
        printf("\n");
    }
       
    return 0;
}