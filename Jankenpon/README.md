<h1 align="center">✊✋✌️ Jankenpon (Pedra, Papel, Tesoura)</h1>

<p align="center">
  Um projeto simples para praticar os fundamentos da linguagem C.
</p>

---

### 🚀 Funcionalidades Principais

* **Interação com o Usuário:** O jogo solicita ao jogador que escolha uma opção (Pedra, Papel ou Tesoura).
* **Escolha Aleatória do Computador:** O computador faz uma escolha aleatória para cada rodada, utilizando a função `rand()` e a semente de tempo para garantir resultados diferentes a cada execução.
* **Lógica de Comparação:** O código compara a escolha do jogador e do computador para determinar o vencedor, o perdedor ou se houve um empate.
* **Exibição do Resultado:** O resultado da rodada é exibido de forma clara no terminal.

---

### 🧠 Conceitos Aplicados

Este projeto foi uma ótima oportunidade para praticar os seguintes conceitos:

* **Estruturas de Controle:** O uso de `if/else` e `switch` para gerenciar as diferentes escolhas e determinar o fluxo do jogo.
* **Funções e Bibliotecas:** O uso de funções como `printf()` e `scanf()` e a inclusão das bibliotecas padrão `stdio.h` e `stdlib.h`.
* **Geração de Números Aleatórios:** A aplicação da biblioteca `time.h` para inicializar a semente de números aleatórios (`srand(time(0))`), o que é essencial para a aleatoriedade do jogo.

---

### ▶️ Como Executar o Projeto

Para compilar e rodar este projeto, você precisa de um compilador C (como o GCC).

1.  Salve o código em um arquivo chamado `jankenpon.c`.
2.  Abra seu terminal ou prompt de comando.
3.  Navegue até o diretório onde você salvou o arquivo.
4.  Compile o código com o seguinte comando:
    ```bash
    gcc jankenpon.c -o jankenpon
    ```
5.  Execute o arquivo gerado:
    ```bash
    ./jankenpon
    ```