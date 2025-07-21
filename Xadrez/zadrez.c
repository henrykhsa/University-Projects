#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
}

void moverRainha(int casas) {
    if (casas > 0){
        printf("Esqueda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas) {
        while (casas > 0) {
        printf("Cima\n");
        casas--;
        }
    printf("Direita\n");
}

int main () {


    //Torre cinco casas para a direita. 
    printf("Movimentos da torre\n\n");
    moverTorre(5); // OK!

    //Bispo cinco casas na diagonal para cima e à direita
    printf("\nMovimentos do bispo\n\n");
    moverBispo(5); // OK!

    //Rainha oito casas para a esquerda.
    printf("\nMovimentos da rainha\n\n");
    moverRainha(8); // OK!

    //O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
    printf("\nMovimentos do cavalo\n\n");
    moverCavalo(2); // OK!

    return 0;
}
