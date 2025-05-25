#include <stdio.h>

int main () {
   
    int Torre = 0;
    int Bispo = 0;

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
    
    return 0;
}
