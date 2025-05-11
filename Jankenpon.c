#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("Jogo de Jankenpon (Pedra, Papel e Tesoura)\n\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra.\n\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n\n");
            break;
        default:
            printf("Escolha inválida!\n\n");
            break;
    }

    switch (escolhaComputador) {
        case 1:
            printf("O computador escolheu Pedra.\n\n");
            break;
        case 2:
            printf("O computador escolheu Papel.\n\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura.\n\n");
            break;
    }

    // Verifica o resultado

    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }
    return 0;
}