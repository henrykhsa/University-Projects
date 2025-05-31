#include <stdio.h>

#define linhas 10 // Define o número de linhas do tabuleiro
#define colunas 10 // Define o número de colunas do tabuleiro

// Verifica se é possível posicionar um navio em determinadas posições no tabuleiro
int pode_posicionar(int tabuleiro[linhas][colunas], int posicoes[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) { // Percorre as posições fornecidas
        int linha = posicoes[i][0]; // Obtém a linha da posição
        int coluna = posicoes[i][1]; // Obtém a linha e a coluna da posição
        if (tabuleiro[linha][coluna] != 0) return 0; // Se a posição já estiver ocupada, retorna 0 (falso)
    }
    return 1; // Se todas as posições estiverem livres, retorna 1 (verdadeiro)
}
// Posiciona um navio no tabuleiro nas posições fornecidas
void posicionar(int tabuleiro[linhas][colunas], int posicoes[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) { // Percorre as posições fornecidas
        int linha = posicoes[i][0]; // Obtém a linha da posição
        int coluna = posicoes[i][1]; // Obtém a coluna da posição
        tabuleiro[linha][coluna] = 3; // Marca a posição do navio no tabuleiro
    }
}

// Função principal do programa
int main() {
    
    // Representação do tabuleiro como uma matriz 10x10
    int tabuleiro [linhas][colunas] = {0};
    
    int navio1[3][2] = {{0, 1}, {0, 2}, {0, 3}}; // Navio 1 - Horizontal (linha 1, colunas B-D)
    if (pode_posicionar(tabuleiro, navio1, 3)) posicionar(tabuleiro, navio1, 3); // Verifica se é possível posicionar o navio 1 e o posiciona se possível
    else printf("Navio 1 não pode ser posicionado.\n");
    
    int navio2[3][2] = {{3, 6}, {4, 6}, {5, 6}}; // Navio 2 - Vertical (coluna G, linhas 4-6)
    if (pode_posicionar(tabuleiro, navio2, 3)) posicionar(tabuleiro, navio2, 3); // Verifica se é possível posicionar o navio 2 e o posiciona se possível
    else printf("Navio 2 não pode ser posicionado.\n");
    
    int navio3[3][2] = {{7, 7}, {8, 8}, {9, 9}}; // Navio 3 - Diagonal principal (↘): (7,7) (8,8) (9,9)
    if (pode_posicionar(tabuleiro, navio3, 3)) posicionar(tabuleiro, navio3, 3); // Verifica se é possível posicionar o navio 3 e o posiciona se possível
    else printf("Navio 3 não pode ser posicionado.\n");
    
    int navio4[3][2] = {{0, 6}, {1, 5}, {2, 4}}; // Navio 4 - Diagonal secundária (↙): (0,6) (1,5) (2,4)
    if (pode_posicionar(tabuleiro, navio4, 3)) posicionar(tabuleiro, navio4, 3); // Verifica se é possível posicionar o navio 4 e o posiciona se possível
    else printf("Navio 4 não pode ser posicionado.\n");
    
    // Exibe o tabuleiro inicial
    // 0 representa água, 3 representa um navio

    // Imprime uma mensagem de boas-vindas
    
    printf("\nTabuleiro inicial:\n\n");
    printf("   "); // Imprime espaços iniciais para alinhar o cabeçalho do tabuleiro
    // Loop para imprimir o cabeçalho do tabuleiro em letras maiusculas de acordo com o tamanho do tabuleiro
    for (char c = 'A'; c < 'A' + colunas; c++) {
        // Imprime o cabeçalho da coluna
        printf(" %2c", c);
    }
    printf("\n");
    // Imprime o tabuleiro
    int i, j; // Variáveis de controle para os loops
    // Loop para cada linha do tabuleiro
    for (i = 0; i < linhas; i++) { 
        // Imprime o número da linha
        printf("%2d| ", i + 1); // Adiciona 1 para que a contagem comece em 1
        // Loop para cada coluna do tabuleiro
        for (j = 0; j < colunas; j++) {
            // Imprime o valor da célula do tabuleiro
            printf("%2d ", tabuleiro[i][j]); //
        }
        // Imprime uma nova linha após cada linha do tabuleiro
        printf("\n");
    }
       
    return 0;
}