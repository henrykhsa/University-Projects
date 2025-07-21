# Jogo_Batalha_Naval

# University-Projects

# Jankenpon

# Xadrez

<h1 align="center">🃏 Desafio Super Trunfo</h1>

<p align="center">
  <b>Tema 1: Fundamentos e Técnicas Avançadas em linguagem C</b><br/>
  1º, 2º e 3º Desafio - Programação Estruturada 💻
</p>

---
<p align="center">
  <b>Tema 2: Desenvolvendo a Lógica do Jogo</b><br/>
  1º, 2º e 3º Desafio - Modelagem de dados e escolhas do usuário 💻
</p>

---

## 👨‍💻 Sobre o Projeto

Este projeto consiste em simular um jogo de **Super Trunfo** com cartas representando cidades de diferentes estados brasileiros. Foi desenvolvido em **C** como parte de um desafio acadêmico com foco em manipulação de dados, cálculos e comparações entre estruturas.

---

### 📋 Funcionalidades do Tema 1

#### 🟢 1º Desafio
- Inserção de dados de duas cartas:
  - Estado (A–H)
  - Código da Carta (ex: A01, B03)
  - Nome da Cidade
  - População
  - Área (km²)
  - PIB
  - Pontos Turísticos
- Exibição organizada das informações.

#### 🟡 2º Desafio
- Cálculo automático:
  - 🧮 Densidade Populacional = População / Área
  - 💰 PIB per Capita = PIB / População
- Formatação com duas casas decimais.
- Exibição completa com dados e cálculos.

#### 🔴 3º Desafio
- Comparação entre as cartas:
  - Densidade Populacional (menor valor vence)
  - Demais atributos (maior valor vence)
- Resultado exibido com 1 (vitória da Carta 1) ou 0 (vitória da Carta 2)

---

### 📋 Funcionalidades do Tema 2

#### 🟢 1º Desafio
- Comparar um único atributo numérico (escolhido diretamente no código):
  - População
  - Área
  - PIB
  - Densidade populacional
  - PIB per capita
- Determinar o vencedor:
  - Quem tiver maior valor vence, exceto na densidade populacional (onde menor valor vence).
- Exibir o resultado da comparação de forma clara, com os valores de cada carta e qual venceu.

#### 🟡 2º Desafio
  - Usar cartas já cadastradas (não precisa cadastrar novamente).
  - Criar um menu no terminal com switch para o jogador escolher qual atributo comparar:
    - População
    - Área
    - PIB
    - Número de pontos turísticos
    - Densidade demográfica
    - (Nome do país é apenas informativo, não entra na comparação)
  - Comparar duas cartas com base no atributo escolhido:
    - Maior valor vence (regra padrão)
    - Exceto na Densidade demográfica, onde menor valor vence 
  - Exibir o resultado da comparação, mostrando:
    - Nome dos dois países
    - Atributo comparado
    - Valores de cada carta
    - Qual carta venceu ou se houve empate

#### 🔴 3º Desafio
  - Integrar conhecimentos de estruturas de decisão em C para:
    - Comparar cartas com dois atributos numéricos.
    - Usar menus dinâmicos com switch.
    - Aplicar o operador ternário para otimizar o código.

  - Escolha de Dois Atributos
    - Jogador deve escolher dois atributos diferentes para comparar.
    - Menus interativos devem garantir que o mesmo atributo não seja escolhido duas vezes.
  - Comparação com Múltiplos Atributos
    - Comparar as cartas com base nos dois atributos escolhidos.
    - Regra geral: Vence quem tiver maior valor.
    - Exceção: Em Densidade Demográfica, vence quem tiver menor valor.
  - Soma dos Atributos
    - Somar os dois atributos de cada carta.
    - A maior soma define o vencedor da rodada.
  - Tratamento de Empates
    - Se as somas forem iguais, exibir: "Empate!".
  - Menus Dinâmicos com switch
    - O menu do segundo atributo deve excluir o primeiro atributo escolhido.
    - Usar switch para estruturar as escolhas de forma clara e organizada.
  - Exibição Clara do Resultado
    - Mostrar:
    - Nome dos dois países.
    - Os dois atributos escolhidos.
    - Os valores dos atributos de cada carta.
    - A soma final dos atributos.
    - O vencedor ou se houve empate.

---

## 🧠 Tecnologias Utilizadas

- Linguagem **C**
- Conceitos de **estrutura de dados**, **entradas formatadas**, **cálculo de métricas** e **comparação lógica**



## 🚀 Em desenvolvimento...

Melhorias futuras podem incluir:
- Entrada via arquivos
- Modo multiplayer 🧑‍🤝‍🧑
