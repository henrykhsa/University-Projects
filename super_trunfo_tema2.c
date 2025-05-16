#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    scanf(" %[^\n]%*c", carta->cidade);
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
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f por km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n\n", carta.PIBperCapita);
    printf("Superpoder: %.2f\n", carta.superpoder);
    printf("\n");
}

//Função que calcula a densidade populacional
void calcularDensidade(struct Carta *carta) {
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
}

//Função que calcula o PIB per capita das cartas
void calcularPIBperCapita(struct Carta *carta) {
    if (carta->populacao > 0) {
        carta->PIBperCapita = (carta->pib * 1e9) / carta->populacao;
    } else {
        carta->PIBperCapita = 0;
    }
}

//Função que calcula o superpoder das cartas
void calcularSuper(struct Carta *carta) {
    carta->superpoder = (carta->populacao / 1000) +
                        (carta->pontosTuristicos * 10) +
                        (carta->area * 0.1) +
                        (carta->pib * 1e3) +
                        (carta->densidadePopulacional * 5) +
                        (carta->PIBperCapita * 0.001);
}

//Função principal
int main() {
    struct Carta carta1, carta2;
    printf("\n\nSuper Trunfo - Jogo de Cartas\n\n");
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Você irá cadastrar duas cartas.\n\n");

    //Chama a função para ler os dados
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Chama a função para calcular a densidade populacional
    calcularDensidade(&carta1);
    calcularDensidade(&carta2);

    // Chama a função para calcular o PIB
    calcularPIBperCapita(&carta1);
    calcularPIBperCapita(&carta2);

    // Chama a função para calcular o superpoder
    calcularSuper(&carta1);
    calcularSuper(&carta2);

    // Imprime o texto e chama a função para exibir as informações
    printf("Cartas cadastradas:\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    int vencedor = 0;

    printf("Selecione uma das opções de comparação: \n 1.População\n 2.Area\n 3.PIB\n 4.Pontos Turisticos\n 5.Densidade Populacional\n 6.PIB per Capita\n 7.Superpoder\n\n");
    scanf("%d", &vencedor);

    switch (vencedor)
    {
    case 1:
        printf("Comparando a população\n");
        printf("População carta 1: %d\n" , carta1.populacao);
        printf("População carta 2: %d\n\n" , carta2.populacao);

        if (carta1.populacao > carta2.populacao) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.populacao < carta2.populacao) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Comparando a area\n");
        printf("Area carta 1: %.2f\n" , carta1.area);
        printf("Area carta 2: %.2f\n\n" , carta2.area);

        if (carta1.area > carta2.area) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.area < carta2.area) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("Comparando o PIB\n");
        printf("PIB carta 1: %.2f\n" , carta1.pib);
        printf("PIB carta 2: %.2f\n\n" , carta2.pib);

        if (carta1.pib > carta2.pib) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.pib < carta2.pib) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Comparando os pontos turisticos\n");
        printf("Pontos turisticos carta 1: %d\n" , carta1.pontosTuristicos);
        printf("Pontos turisticos carta 2: %d\n\n" , carta2.pontosTuristicos);

        if (carta1.pontosTuristicos > carta2.pontosTuristicos) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Comparando a densidade populacional\n");
        printf("Densidade populacional carta 1: %.2f\n" , carta1.densidadePopulacional);
        printf("Densidade populacional carta 2: %.2f\n\n" , carta2.densidadePopulacional);

        if (carta1.densidadePopulacional > carta2.densidadePopulacional) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("Comparando o PIB per capita\n");
        printf("PIB per capita carta 1: %.2f\n" , carta1.PIBperCapita);
        printf("PIB per capita carta 2: %.2f\n\n" , carta2.PIBperCapita);

        if (carta1.PIBperCapita > carta2.PIBperCapita) {    
            printf("A carta %s venceu!\n", carta1.codigo);
        } else if (carta1.PIBperCapita < carta2.PIBperCapita) {
            printf("A carta %s venceu!\n", carta2.codigo);
        } else {
            printf("Empate!\n");
        }
        break;
    case 7:
        printf("Comparando o superpoder\n");
        printf("Superpoder carta 1: %.2f\n" , carta1.superpoder);
        printf("Superpoder carta 2: %.2f\n\n" , carta2.superpoder);

        //if (carta1.superpoder > carta2.superpoder) {    
        //    printf("A carta %s venceu!\n", carta1.codigo);
        //} else if (carta1.superpoder < carta2.superpoder) {
        //    printf("A carta %s venceu!\n", carta2.codigo);
        //} else {
        //    printf("Empate!\n");
        //}
        break;
    default:
        printf("Opção inválida!\n");
        printf("Selecione uma opção válida de comparação.\n");
        break;
    }

    return 0;
}