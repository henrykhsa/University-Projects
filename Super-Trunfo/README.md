<h1 align="center">🃏 Desafio Super Trunfo</h1>

<p align="center">
  Um jogo de cartas em C para praticar lógica e manipulação de dados.
</p>

---

### 🚀 Funcionalidades Principais

* **Modelagem de Dados:** Cartas com atributos como População, Área e PIB, representando cidades brasileiras.
* **Cálculos Automáticos:** O jogo realiza cálculos de Densidade Populacional e PIB per Capita em tempo real.
* **Lógica de Jogo Dinâmica:**
    * **Comparação por Atributo:** O jogador pode escolher um ou dois atributos para comparar.
    * **Regras Específicas:** Vence quem tiver o maior valor, com a exceção da Densidade Demográfica, onde o menor valor vence.
    * **Tratamento de Múltiplos Atributos:** Quando dois atributos são escolhidos, o vencedor é definido pela soma dos seus valores.
* **Menus Interativos:** O jogo utiliza menus com `switch` para guiar o jogador, com validação de escolhas para evitar repetições.

---

### 🧠 Tecnologias e Conceitos Aplicados

* **Linguagem:** C
* **Conceitos:**
    * Estruturas de dados (`structs`) para modelar as cartas.
    * Entradas formatadas e cálculo de métricas.
    * Estruturas de decisão (`if/else`, `switch`) e operadores ternários.
    * Lógica de comparação e tratamento de empates.

---

### ▶️ Como Executar o Projeto

Para compilar e rodar o projeto, você precisa de um compilador C (como o GCC).

1.  Salve o código em um arquivo chamado `super_trunfo.c`.
2.  Abra seu terminal e navegue até o diretório do projeto.
3.  Compile o código com o seguinte comando:
    ```bash
    gcc super_trunfo.c -o super_trunfo
    ```
4.  Execute o arquivo:
    ```bash
    ./super_trunfo
    ```

---

### 🛠️ Em desenvolvimento...

Melhorias futuras podem incluir:

* Entrada de dados via arquivos.
* Modo multiplayer.