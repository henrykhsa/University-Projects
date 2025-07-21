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

    int primeiroAtributo = 0;
    int segundoAtributo = 0;
    int resultado1 = 0;
    int resultado2 = 0;
    // Solicita ao usuário que escolha os atributos para comparação
    printf("Selecione a primeira opções de comparação:\n");
    printf("\n 1.População\n 2.Área\n 3.PIB\n 4.Pontos Turísticos\n 5.Densidade Populacional\n 6.PIB per Capita\n 7.Superpoder\n\n");
    // Adicionei o espaço antes de %c para evitar problemas com o buffer de entrada
    scanf("%d", &primeiroAtributo);
    
    switch (primeiroAtributo) {
    case 1:
        printf("\nComparando a população\n");
        printf("População carta 1: %d\n" , carta1.populacao);
        printf("População carta 2: %d\n\n" , carta2.populacao);
        
        resultado1 = carta1.populacao > carta2.populacao ? 1 : 0;
        break;
    case 2:
        printf("\nComparando a área\n");
        printf("Área carta 1: %.2f\n" , carta1.area);
        printf("Área carta 2: %.2f\n\n" , carta2.area);

        resultado1 = carta1.area > carta2.area ? 1 : 0;
        break;
    case 3:
        printf("\nComparando o PIB\n");
        printf("PIB carta 1: %.2f\n" , carta1.pib);
        printf("PIB carta 2: %.2f\n\n" , carta2.pib);

        resultado1 = carta1.pib > carta2.pib ? 1 : 0;
        break;
    case 4:
        printf("\nComparando os pontos turisticos\n");
        printf("Pontos turisticos carta 1: %d\n" , carta1.pontosTuristicos);
        printf("Pontos turisticos carta 2: %d\n\n" , carta2.pontosTuristicos);

        resultado1 = carta1.pontosTuristicos > carta2.pontosTuristicos ? 1 : 0;
        break;
    case 5:
        printf("\nComparando a densidade populacional\n");
        printf("Densidade populacional carta 1: %.2f\n" , carta1.densidadePopulacional);
        printf("Densidade populacional carta 2: %.2f\n\n" , carta2.densidadePopulacional);

        // comparei a densidade populacional de forma inversa

        resultado1 = carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 0;
        break;
    case 6:
        printf("\nComparando o PIB per capita\n");
        printf("PIB per capita carta 1: %.2f\n" , carta1.PIBperCapita);
        printf("PIB per capita carta 2: %.2f\n\n" , carta2.PIBperCapita);

        resultado1 = carta1.PIBperCapita > carta2.PIBperCapita ? 1 : 0;
        break;
    case 7:
        printf("\nComparando o Superpoder\n");
        printf("Superpoder carta 1: %.2f\n" , carta1.superpoder);
        printf("Superpoder carta 2: %.2f\n\n" , carta2.superpoder);

        resultado1 = carta1.superpoder > carta2.superpoder ? 1 : 0;
        break;

    // Adicionei o case default para lidar com entradas inválidas
    default:
        printf("\nOpção inválida!\n");
        printf("Selecione uma opção válida de comparação.\n");
        break;
    }
    // Solicita ao usuário que escolha o segundo atributo para comparação
    printf("Escolha a segunda opção de comparação:\n");
    printf("\n 1.População\n 2.Area\n 3.PIB\n 4.Pontos Turisticos\n 5.Densidade Populacional\n 6.PIB per Capita\n 7.Superpoder\n");
    // Adicionei o espaço antes de %c para evitar problemas com o buffer de entrada
    scanf("%d", &segundoAtributo);
    // Verifica se o usuário escolheu o mesmo atributo para comparação
    // Se o usuário escolher o mesmo atributo, exibe uma mensagem de erro e encerra o programa
    if (primeiroAtributo == segundoAtributo) {
        printf("\nVocê não pode escolher o mesmo atributo para comparação!\n");
        printf("Escolha um atributo diferente para comparação.\n");
        return 0;

    } else {
        switch (segundoAtributo) {
        case 1:
            printf("\nComparando a população\n");
            printf("População carta 1: %d\n" , carta1.populacao);
            printf("População carta 2: %d\n\n" , carta2.populacao);

            resultado2 = carta1.populacao > carta2.populacao ? 1 : 0;
            // depois vai ser comparado os resultados
            break;
        case 2:
            printf("\nComparando a área\n");
            printf("Área carta 1: %.2f\n" , carta1.area);
            printf("Área carta 2: %.2f\n\n" , carta2.area);

            resultado2 = carta1.area > carta2.area ? 1 : 0;
            break;
        case 3:
            printf("\nComparando o PIB\n");
            printf("PIB carta 1: %.2f\n" , carta1.pib);
            printf("PIB carta 2: %.2f\n\n" , carta2.pib);

            resultado2 = carta1.pib > carta2.pib ? 1 : 0;
            break;
        case 4:
            printf("\nComparando os pontos turisticos\n");
            printf("Pontos turisticos carta 1: %d\n" , carta1.pontosTuristicos);
            printf("Pontos turisticos carta 2: %d\n\n" , carta2.pontosTuristicos);

            resultado2 = carta1.pontosTuristicos > carta2.pontosTuristicos ? 1 : 0;
            break;
        case 5:
            printf("\nComparando a densidade populacional\n");
            printf("Densidade populacional carta 1: %.2f\n" , carta1.densidadePopulacional);
            printf("Densidade populacional carta 2: %.2f\n\n" , carta2.densidadePopulacional);

            // comparei a densidade populacional de forma inversa
            resultado2 = carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 0;
            break;
        case 6:
            printf("\nComparando o PIB per capita\n");
            printf("PIB per capita carta 1: %.2f\n" , carta1.PIBperCapita);
            printf("PIB per capita carta 2: %.2f\n\n" , carta2.PIBperCapita);

            resultado2 = carta1.PIBperCapita > carta2.PIBperCapita ? 1 : 0;
            break;
        case 7:
            printf("\nComparando o Superpoder\n");
            printf("Superpoder carta 1: %.2f\n" , carta1.superpoder);
            printf("Superpoder carta 2: %.2f\n\n" , carta2.superpoder);

            resultado2 = carta1.superpoder > carta2.superpoder ? 1 : 0;
            break;
        
        // Adicionei o case default para lidar com entradas inválidas
        default:
            printf("\nOpção inválida!\n");
            printf("Selecione uma opção válida de comparação.\n");
            break;
        }
    }

    // Exibe o resultado da comparação
        if (resultado1 && resultado2) {
        printf("\nA carta 1 venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("\nEmpate!\n");
    } else {
        printf("\nA carta 2 venceu!\n");
    }
    // Exibe uma mensagem de agradecimento ao usuário
    printf("\n\nObrigado por jogar!\n");
    return 0;
}