#include <stdio.h>

//Definindo as propriedades das cartas
struct Carta {
    char estado;
    char codigo[5];  
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float PIBperCapita;
    float superpoder;
};

//Função que lê as informações inseridas das cartas
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

//Função que exibe as informações das cartas
void exibirCarta(struct Carta carta, int numeroCarta) {
    printf("Carta %d:\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f por km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f bilhões de reais\n", carta.PIBperCapita);
    printf("\n");
}

//Função que calcula a densidade das cartas
void calcularDensidade(struct Carta *carta) {
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
}

//Função que calcula o PIB per capita das cartas
void calcularPIBperCapita(struct Carta *carta) {
    carta->PIBperCapita = carta->pib / carta->populacao;
}

//Função que calcula o superpoder das cartas
void calcularsuper (struct Carta *carta) {
    carta->superpoder = carta->populacao + carta->pontosTuristicos + carta->area + carta->pib + carta->densidadePopulacional + carta->PIBperCapita;
}

//Função principal
int main() {
    struct Carta carta1, carta2, vencedor;

    // Chama a função para ler os dados
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Chama a função para calcular a densidade populacional
    calcularDensidade(&carta1);
    calcularDensidade(&carta2);

    // Chama a função para calcular o PIB
    calcularPIBperCapita(&carta1);
    calcularPIBperCapita(&carta2);
    
    // Chama a função para calcular o superpoder
    calcularsuper(&carta1);
    calcularsuper(&carta2);
    
    // Imprime o texto e chama a função para exibir as informações
    printf("Cartas cadastradas:\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
