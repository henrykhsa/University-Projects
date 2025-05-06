# Desafio super trunfo.

## Tema 1: Fundamentos e Técnicas Avançadas

### 1º Desafio

1. Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
- Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
- Nome da Cidade: O nome da cidade. Tipo: char[] (string)
- População: O número de habitantes da cidade. Tipo: int
- Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
- PIB: O Produto Interno Bruto da cidade. Tipo: float
- Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

2. Após o usuário inserir os dados de cada carta, o programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, irá imprimir cada informação em uma linha separada, com uma descrição clara.

### 2º Desafio

O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, o programa também deve:

1. Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
 
2. Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
 
3. Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formatar os valores de ponto flutuante com duas casas decimais.

### 3º Desafio

1. Comparar as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
2. Para cada atributo, imprimir na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).