//tentei limpar um pouco o código e tirei informações desnecessárias, tentei simplificar ao máximo tudo.

#include <stdio.h>

struct Carta {
    char estado;
    char codigo[5];  
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

void lerCarta(struct Carta *carta, int numeroCarta) {
    printf("Insira os dados da carta %d:\n", numeroCarta);
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta->estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta->cidade);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    printf("\n");
}

void exibirCarta(struct Carta carta, int numeroCarta) {
    printf("Carta %d:\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2;

    // Ler os dados das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibir as cartas
    printf("Cartas cadastradas:\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
// o programa voltou a funcionar, proximo passo talvez seria adicionar verificação de informações inseridas.