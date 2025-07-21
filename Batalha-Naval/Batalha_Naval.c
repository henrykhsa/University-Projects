#include <stdio.h>

#define LINHAS 10 // Define o número de linhas do tabuleiro
#define COLUNAS 10 // Define o número de colunas do tabuleiro


/* ================= UTILITÁRIOS PARA O TABULEIRO ================= */

/* ===================================================== *
 *  Verifica se TODAS as posições estão livres (==0).     *
 *  Se estiverem, grava o 'valor' nelas e devolve 1.      *
 *  Se QUALQUER posição já estiver ocupada, devolve 0     *
 *  e NÃO altera o tabuleiro.                             *
 * ===================================================== */

int tentar_posicionar(int tabuleiro[LINHAS][COLUNAS],
                      int posicoes[][2],
                      int tamanho,
                      int valor)
{
    /* ---------- 1ª passada: só VERIFICA ---------- */
    for (int i = 0; i < tamanho; i++) {
        int lin = posicoes[i][0];
        int col = posicoes[i][1];
        if (tabuleiro[lin][col] != 0)// Caso já tenha algo ali
            return 0;// falha -> sai SEM alterar
    }

    /* ---------- 2ª passada: agora POSICIONA ---------- */
    for (int i = 0; i < tamanho; i++) {
        int lin = posicoes[i][0];
        int col = posicoes[i][1];
        tabuleiro[lin][col] = valor;
    }
    return 1; // sucesso
}

// Zerar o tabuleiro
void zerar_tabuleiro(int tabuleiro[LINHAS][COLUNAS]) 
{
    for (int i = 0; i < LINHAS; i++) {                  // Percorre cada linha do tabuleiro
        for (int j = 0; j < COLUNAS; j++) {             // Percorre cada coluna do tabuleiro
            tabuleiro[i][j] = 0;                        // Zera a posição do tabuleiro
        }
    }
}

/* ==================== IMPRESSÃO DO TABULEIRO ======================= */

void imprimir_tabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("   "); // Imprime espaços iniciais para alinhar o cabeçalho do tabuleiro
    for (char c = 'A'; c < 'A' + COLUNAS; c++) {
        // Imprime o cabeçalho da coluna
        printf(" %2c", c);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) { 
        // Imprime o número da linha
        printf("%2d| ", i + 1); // Adiciona 1 para que a contagem comece em 1
        // Loop para cada coluna do tabuleiro
        for (int j = 0; j < COLUNAS; j++) {
            // Imprime o valor da célula do tabuleiro
            printf("%2d ", tabuleiro[i][j]);
        }
        // Imprime uma nova linha após cada linha do tabuleiro
        printf("\n");
    }
}

/* ============================ MAIN =============================== */

int main() {
    /* ============= DEFININDO AS INFORMAÇÕES DO TABULEIRO ============= */

    int tabuleiro [LINHAS][COLUNAS] = {0};

    // HABILIDADES DE POSICIONAMENTO

    // Habilidade Cone
    int habilidade_cone[9][2] = {
        {1, 6},
        {2, 5}, {2, 6}, {2, 7},
        {3, 4}, {3, 5}, {3, 6}, {3, 7}, {3, 8}
    };

    // Habilidade Cruz
    int habilidade_cruz[5][2] = {
        {0, 2},
        {1, 1}, {1, 2}, {1, 3},
        {2, 2}
    };

    // Habilidade Octaedro
    int habilidade_octaedro[8][2] = {
        {4, 2},
        {5, 1}, {5, 2}, {5, 3},
        {6, 1}, {6, 2}, {6, 3},
        {7, 2}
    };
    
    //
    int navio1[3][2] = {{0, 1}, {0, 2}, {0, 3}}; // Navio 1 - Horizontal (linha 1, colunas B-D)
    int navio2[3][2] = {{3, 6}, {4, 6}, {5, 6}}; // Navio 2 - Vertical (coluna G, linhas 4-6)
    int navio3[3][2] = {{7, 7}, {8, 8}, {9, 9}}; // Navio 3 - Diagonal (↘): (7,7) (8,8) (9,9)
    int navio4[3][2] = {{0, 6}, {1, 5}, {2, 4}}; // Navio 4 - Diagonal (↙): (0,6) (1,5) (2,4)

    // Imprime o tabuleiro inicial
    printf("\n\nTabuleiro inicial:\n\n");
    // Loop para imprimir o cabeçalho do tabuleiro em letras maiusculas de acordo com o tamanho do tabuleiro
    imprimir_tabuleiro(tabuleiro); // Chama a função para imprimir o tabuleiro
                                   
    /*======POSICIONANDO OS NAVIOS COM VERIFICAÇÃO======*/

    if (!tentar_posicionar(tabuleiro, navio1, 3, 3))
        printf("Navio 1 não pode ser posicionado.\n"); // Se não for possível posicionar o navio 1, imprime mensagem

    if (!tentar_posicionar(tabuleiro, navio2, 3, 3))
        printf("Navio 2 não pode ser posicionado.\n"); // Se não for possível posicionar o navio 2, imprime mensagem
    
    if (!tentar_posicionar(tabuleiro, navio3, 3, 3))
        printf("Navio 3 não pode ser posicionado.\n"); // Se não for possível posicionar o navio 3, imprime mensagem
    
    if (!tentar_posicionar(tabuleiro, navio4, 3, 3))
        printf("Navio 4 não pode ser posicionado.\n"); // Se não for possível posicionar o navio 4, imprime mensagem

    // Imprime o tabuleiro após o posicionamento dos navios
    
    printf("\nTabuleiro após posicionamento dos navios:\n\n");
    imprimir_tabuleiro(tabuleiro); // Chama a função para imprimir o tabuleiro atualizado

    /*=============IMPRIMINDO AS HABILIDADES==================*/

    // Zera o tabuleiro para exibição dos exemplos de habilidades
    zerar_tabuleiro(tabuleiro); // Chama a função para zerar o tabuleiro

    // Exemplo de uso das habilidades
    printf("\nExemplo de uso das habilidades:\n");

    printf("\nHabilidade Cone\n");
    printf("\nPosicionando navio com habilidade cone...\n");
    if (!tentar_posicionar(tabuleiro, habilidade_cone, 9, 5)) {
        printf("Habilidade Cone não pode ser posicionada.\n");
    }
    imprimir_tabuleiro(tabuleiro); // Imprime o tabuleiro após posicionar a habilidade cone
    printf("\n");

    printf("\nHabilidade Cruz\n");
    printf("\nPosicionando navio com habilidade cruz...\n");
    if (!tentar_posicionar(tabuleiro, habilidade_cruz, 5, 6)) {
        printf("Habilidade Cruz não pode ser posicionada.\n");
    }
    imprimir_tabuleiro(tabuleiro); // Imprime o tabuleiro após posicionar a habilidade cruz
    printf("\n");

    printf("\nHabilidade Octaedro\n");
    printf("\nPosicionando navio com habilidade octaedro...\n");
    if (!tentar_posicionar(tabuleiro, habilidade_octaedro, 8, 7)) {
        printf("Habilidade Octaedro não pode ser posicionada.\n");
    }
    imprimir_tabuleiro(tabuleiro); // Imprime o tabuleiro após posicionar a habilidade octaedro
    printf("\n");

    return 0;
}