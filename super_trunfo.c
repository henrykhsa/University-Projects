//tentei fazer um código parecido com o das aulas mas tive bastante dificuldade de execultar ele, então pesquisei sobre estruturas e funções e vi algumas coisas que poderiam ajudar.

#include <stdio.h> 
//incluindo a biblioteca padrão de entrada e saída.
#include <ctype.h> 
//biblioteca que manipula caracter, vou usar pra alterar os valores pra maiúsculo
#include <string.h> 
//biblioteca para manipulação de strings, vou usar pra somar valores.

//tentei criar primeiramente duas funções pra gravar as informações das cartas:

typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
} CartaSuperTrunfo; 
// Dei uma pesquisada e vi que como eu teria que fazer mais de uma criação de carta seria mais viável fazer uma struct e definir as informações para as cartas em "CartaSuperTrunfo"

//Também estudado por fora, vi que poderia usar um void (já que não quero nenhuma saída no momento) e fazer uma função pra ler as informações para criar as cartas e outro para mostrar as informações.

//Aqui eu fiquei com dificuldade pra entender como usa o "*" mas vi que ele é utilizado como ponteiro, pra alterar diretamente os valores (pelo que eu entendi), ai declarei uma variável "carta" pra ser usada depois:
void lerCarta(CartaSuperTrunfo *carta) {
    char codigoTemp[3]; 
    // Variável temporária para armazenar um número
    printf("Digite o estado (A-H): "); 
    //printf pra imprimir quais valores preciso capturar
    scanf("%c", &carta->estado);//scanf pra capturar os valores e atrelar no ponteiro
    carta->estado = toupper(carta->estado);
    // Aqui foi usado o toupper pra alterar o caracter para maiúsculo, isso é contido na biblioteca ctype que inseri no começo do programa.

    printf("Digite o código da carta (letra do estado seguida de um número de 01 a 04): ");
    scanf("%2s", codigoTemp); // Ler a parte numérica do código
    snprintf(carta->codigo, sizeof(carta->codigo), "%c%s", carta->estado, codigoTemp); // Concatenar o estado e o código numérico

    printf("Digite o nome da cidade: ");
    scanf(" %s", carta->nomeCidade);

    printf("Digite a população: ");
    scanf(" %d", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf(" %f", &carta->area);

    printf("Digite o PIB: ");
    scanf(" %f", &carta->PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

//como aqui ele vai só lêr, não precisa do "*", os valores já foram definidos pra variável "carta". Cada declaraçção de carta é seguida de um "." pra especificar qual informação precisa ser lida.
void mostrarCarta (CartaSuperTrunfo carta) {
    printf("Estado: %c\n", carta.estado );
    printf("Código: %s\n", carta.codigo );
    printf("Nome da cidade: %s\n", carta.nomeCidade );
    printf("População: %d\n", carta.populacao );
    printf("Área: %.2f km²\n", carta.area );
    printf("PIB: %.2f\n", carta.PIB);
    printf("Pontos turísticos: %d\n", carta.pontosTuristicos );
}

// Aqui eu vou inserir toda a estrutura de fato do programa. (ou tentar pelo menos! '-')
int main() {
    CartaSuperTrunfo carta1, carta2; 
    //aqui eu inseri duas variáveis seguindo a estrutura definida pela struct, acho que é assim que se faz normalmente.
    printf("insira as informações da carta 01: \n"); 
    // inseri uma linha pra explicar ao console o que precisa se inserido.
    lerCarta(&carta1);
    //aqui eu executo a função "LerCarta" pra pegar as informações do console e grava na variável "carta1", o & é usado pra especificar o endereço à ser gravado.
    //Fiz a mesma coisa para a segunda variável:
    printf("\nInsira as informações da carta 02:\n");
    lerCarta(&carta2);

    printf("\nInformações das cartas inseridas:\n");
    //Um comando pra  imprimir as informações inseridas.

    //E finalmente os comandos pra mostrar as informações das cartas juntas usando a função "MostrarCarta":
    printf("\nCarta 01:\n");
    mostrarCarta(carta1);

    printf("\nCarta 02:\n");
    mostrarCarta(carta2);

    return 0;
    // Vi que essa linha era necessaria pra o programa retornar o erro casso ele encontre algum. (bem útil, principalmente pra mim! '-')
}
