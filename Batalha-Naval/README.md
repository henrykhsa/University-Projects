<h1 align="center">🎯 Batalha Naval em C</h1>

<p align="center">
  Um projeto de lógica e estruturas de dados bidimensionais.
</p>

---

### 🚀 Funcionalidades Principais

* **Tabuleiro Dinâmico:** Utiliza uma matriz bidimensional (`10x10`) para representar o tabuleiro do jogo.
* **Posicionamento de Navios:** O código inclui funções para posicionar navios em diferentes formatos (horizontais, verticais e diagonais) e "habilidades" especiais.
* **Validação de Posição:** A função `tentar_posicionar` verifica se uma posição no tabuleiro está livre antes de alocar um navio, garantindo que não haja sobreposição.
* **Impressão do Tabuleiro:** Uma função dedicada para imprimir o tabuleiro de forma clara e organizada, com cabeçalhos de linha e coluna.

---

### 🧠 Conceitos Aplicados

Este projeto foi uma excelente oportunidade para aprofundar em:

* **Estruturas de Dados:** O uso de matrizes (`int tabuleiro[LINHAS][COLUNAS]`) para representar dados de forma complexa e organizada.
* **Lógica de Programação:** Implementação das regras do jogo, como o posicionamento de navios e a validação de posições.
* **Programação Estruturada:** O código é dividido em funções lógicas (`zerar_tabuleiro`, `imprimir_tabuleiro`, `tentar_posicionar`), o que o torna modular e de fácil manutenção.

---

### ▶️ Como Executar o Projeto

Para compilar e rodar este projeto, você precisa de um compilador C (como o GCC).

1.  Salve o código em um arquivo chamado `batalha_naval.c`.
2.  Abra seu terminal ou prompt de comando.
3.  Navegue até o diretório onde você salvou o arquivo.
4.  Compile o código com o seguinte comando:
    ```bash
    gcc batalha_naval.c -o batalha_naval
    ```
5.  Execute o arquivo gerado:
    ```bash
    ./batalha_naval
    ```

---

### 🛠️ Melhorias Futuras

Este é um projeto em desenvolvimento, e algumas melhorias podem ser adicionadas para torná-lo um jogo completo:

* Adicionar **interação com o usuário** para permitir que o jogador posicione os navios.
* Implementar a **lógica de jogo** completa (turnos, disparos, pontuação, etc.).
* Criar um modo de **jogo contra a máquina** com uma IA básica.