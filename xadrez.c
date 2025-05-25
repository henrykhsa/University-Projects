#include <stdio.h>

int main () {
   
    int Torre = 0;
    int Bispo = 0;
    int Rainha = 0;

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

    return 0;
}
