#include <stdio.h>

#define linhas 10 // Define o número de linhas do tabuleiro
#define colunas 10 // Define o número de colunas do tabuleiro


/* ================= UTILITÁRIOS PARA O TABULEIRO ================= */

/* ===================================================== *
 *  Verifica se TODAS as posições estão livres (==0).     *
 *  Se estiverem, grava o 'valor' nelas e devolve 1.      *
 *  Se QUALQUER posição já estiver ocupada, devolve 0     *
 *  e NÃO altera o tabuleiro.                             *
 * ===================================================== */
int tentar_posicionar(int tabuleiro[linhas][colunas],
                      int posicoes[][2],
                      int tamanho,
                      int valor)                // 3 p/ navio, 1 p/ habilidade…
{
    /* ---------- 1ª passada: só VERIFICA ---------- */
    for (int i = 0; i < tamanho; i++) {
        int lin = posicoes[i][0];
        int col = posicoes[i][1];
        if (tabuleiro[lin][col] != 0)           // já tem algo ali
            return 0;                           // falha -> sai SEM alterar
    }

    /* ---------- 2ª passada: agora POSICIONA ---------- */
    for (int i = 0; i < tamanho; i++) {
        int lin = posicoes[i][0];
        int col = posicoes[i][1];
        tabuleiro[lin][col] = valor;
    }
    return 1;                                   // sucesso
}

int pode_posicionar(int tabuleiro[linhas][colunas], int posicoes[][2], int tamanho) { // Recebe o tabuleiro, as posições do navio e o tamanho do navio
    for (int i = 0; i < tamanho; i++) {                 // Percorre as posições fornecidas
        int linha = posicoes[i][0];                     // Obtém a linha da posição
        int coluna = posicoes[i][1];                    // Obtém a linha e a coluna da posição
        if (tabuleiro[linha][coluna] != 0) return 0;    // Se a posição já estiver ocupada, retorna 0 (falso)
    }
    return 1; // Se todas as posições estiverem livres, retorna 1 (verdadeiro)
}

void posicionar(int tabuleiro[linhas][colunas], int posicoes[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {                 // Percorre as posições fornecidas
        int linha = posicoes[i][0];                     // Obtém a linha da posição
        int coluna = posicoes[i][1];                    // Obtém a coluna da posição
        tabuleiro[linha][coluna] = 3;                   // Marca a posição do navio no tabuleiro
    }
}

// Zerar o tabuleiro
void zerar_tabuleiro(int tabuleiro[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {                  // Percorre cada linha do tabuleiro
        for (int j = 0; j < colunas; j++) {             // Percorre cada coluna do tabuleiro
            tabuleiro[i][j] = 0;                         // Zera a posição do tabuleiro
        }
    }
}

void posicionar_habilidade(int tabuleiro[linhas][colunas], int habilidade[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {                 // Percorre as posições da habilidade
        int linha = habilidade[i][0];                   // Obtém a linha da posição
        int coluna = habilidade[i][1];                  // Obtém a coluna da posição
        tabuleiro[linha][coluna] = 1;                   // Marca a posição da habilidade no tabuleiro
    }
}

/* ==================== IMPRESSÃO DO TABULEIRO ======================= */

void imprimir_tabuleiro(int tabuleiro[linhas][colunas]) {
    printf("   "); // Imprime espaços iniciais para alinhar o cabeçalho do tabuleiro
    for (char c = 'A'; c < 'A' + colunas; c++) {
        // Imprime o cabeçalho da coluna
        printf(" %2c", c);
    }
    printf("\n");

    for (int i = 0; i < linhas; i++) { 
        // Imprime o número da linha
        printf("%2d| ", i + 1); // Adiciona 1 para que a contagem comece em 1
        // Loop para cada coluna do tabuleiro
        for (int j = 0; j < colunas; j++) {
            // Imprime o valor da célula do tabuleiro
            printf("%2d ", tabuleiro[i][j]);
        }
        // Imprime uma nova linha após cada linha do tabuleiro
        printf("\n");
    }
}

/* ============================ MAIN =============================== */

int main() {
    
    // Representação do tabuleiro como uma matriz 10x10
    int tabuleiro [linhas][colunas] = {0};

   //habilidade cone
    int habilidade_cone[9][2] = {
        {2, 6},
        {3, 5}, {3, 6}, {3, 7},
        {4, 4}, {4, 5}, {4, 6}, {4, 7}, {4, 8}
    };

    //habilidade cruz
    int habilidade_cruz[5][2] = {
        {0, 2},
        {1, 1}, {1, 2}, {1, 3},
        {2, 2}
    };

    //habilidade octaedro
    /*int habilidade_octaedro
*/
    int navio1[3][2] = {{0, 1}, {0, 2}, {0, 3}}; // Navio 1 - Horizontal (linha 1, colunas B-D)
    int navio2[3][2] = {{3, 6}, {4, 6}, {5, 6}}; // Navio 2 - Vertical (coluna G, linhas 4-6)
    int navio3[3][2] = {{7, 7}, {8, 8}, {9, 9}}; // Navio 3 - Diagonal (↘): (7,7) (8,8) (9,9)
    int navio4[3][2] = {{0, 6}, {1, 5}, {2, 4}}; // Navio 4 - Diagonal (↙): (0,6) (1,5) (2,4)

    // Imprime o tabuleiro inicial
    printf("\n\nTabuleiro inicial:\n");
    // Loop para imprimir o cabeçalho do tabuleiro em letras maiusculas de acordo com o tamanho do tabuleiro
    imprimir_tabuleiro(tabuleiro); // Chama a função para imprimir o tabuleiro
                                   
    /*======VERIFICANDO OS NAVIOS======*/

    if (!tentar_posicionar(tabuleiro, navio1, 3, 3))
        printf("Navio 1 não pode ser posicionado.\n"); // Se não for possível posicionar o navio 1, imprime mensagem

    /*if (pode_posicionar(tabuleiro, navio1, 3)) posicionar(tabuleiro, navio1, 3); // Verifica se é possível posicionar o navio 1 e o posiciona se possível
    else printf("Navio 1 não pode ser posicionado.\n");
    
    if (pode_posicionar(tabuleiro, navio2, 3)) posicionar(tabuleiro, navio2, 3);// Verifica se é possível posicionar o navio 2 e o posiciona se possível
    else printf("Navio 2 não pode ser posicionado.\n");
    
    if (pode_posicionar(tabuleiro, navio3, 3)) posicionar(tabuleiro, navio3, 3);// Verifica se é possível posicionar o navio 3 e o posiciona se possível
    else printf("Navio 3 não pode ser posicionado.\n");
    
    if (pode_posicionar(tabuleiro, navio4, 3)) posicionar(tabuleiro, navio4, 3);// Verifica se é possível posicionar o navio 4 e o posiciona se possível
    else printf("Navio 4 não pode ser posicionado.\n");
    */
    // Imprime o tabuleiro após o posicionamento dos navios
    
    printf("\nTabuleiro após posicionamento dos navios:\n\n");
    imprimir_tabuleiro(tabuleiro); // Chama a função para imprimir o tabuleiro atualizado

    // Zera o tabuleiro para o próximo exemplo
    zerar_tabuleiro(tabuleiro); // Chama a função para zerar o tabuleiro

    // Exemplo de uso das habilidades
    printf("Exemplo de uso das habilidades:\n");

    printf("Habilidade Cone\n");
    printf("Posicionando navio com habilidade cone...\n");
    if (pode_posicionar(tabuleiro, habilidade_cone,9)) posicionar_habilidade(tabuleiro, habilidade_cone, 9); // Posiciona a habilidade cone no tabuleiro
    else printf("Habilidade Cone não pode ser posicionada.\n");

    imprimir_tabuleiro(tabuleiro); // Imprime o tabuleiro após posicionar a habilidade cone
    printf("\n");

    printf("Habilidade Cruz:\n");
    printf("Posicionando navio com habilidade cruz...\n");
    if (pode_posicionar(tabuleiro, habilidade_cruz, 5)) posicionar_habilidade(tabuleiro, habilidade_cruz, 5); // Posiciona a habilidade cruz no tabuleiro
    else printf("Habilidade Cruz não pode ser posicionada.\n");

    imprimir_tabuleiro(tabuleiro); // Imprime o tabuleiro após posicionar a habilidade cruz
    printf("\n");

    return 0;
}