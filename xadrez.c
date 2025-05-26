#include <stdio.h>

int main () {
   
    int Torre = 0;
    int Bispo = 0;
    int Rainha = 0;
    int Cavalo = 0;

    printf("Movimentos da torre\n\n");
    for (Torre; Torre <= 4; Torre++) {
        printf("direita\n");
    }

    printf("\nMovimentos do bispo\n\n");
    while (Bispo <= 4) {
        printf("cima\n");
        printf("direita\n");
        Bispo++;
    }

    Bispo++;
    
    printf("\nMovimentos da rainha\n\n");
    do {
        printf("esquerda\n");
        Rainha++;
    } while (Rainha <= 7);

    printf("\nMovimentos do cavalo\n\n");
    for (Cavalo; Cavalo < 2; Cavalo++) {
        while (Cavalo < 2) {
            printf("baixo\n");
            Cavalo++;
        }
        {
            printf("esquerda\n");
        }
    
    }

    return 0;
}
