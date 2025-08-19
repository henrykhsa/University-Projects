<h1 align="center">🔍 Encontrando o Maior Número em C++</h1>

<p align="center">
  Um projeto simples que demonstra o uso de classes para resolver um problema de algoritmo.
</p>

---

### 📜 Sobre o Projeto

Este projeto é um programa em C++ que encontra o maior número em um vetor (array) de inteiros. O objetivo foi aplicar os conceitos de **Programação Orientada a Objetos (POO)** para resolver um problema de algoritmo de busca.

---

### 🧠 Conceitos Aplicados

* **Programação Orientada a Objetos (POO):** O código utiliza uma classe (`Utilitario`) para encapsular a lógica de busca do maior número, separando-a da função principal.
* **Classes e Objetos:** A classe `Utilitario` é definida com um construtor e um método, e uma instância dela (`objUtil`) é criada para ser utilizada no programa.
* **Encapsulamento:** O uso de membros `private` (`vetor` e `tamanho`) garante que os dados internos da classe não possam ser acessados ou modificados diretamente de fora.
* **Algoritmos de Busca:** A lógica para encontrar o maior número é um exemplo clássico de um algoritmo de busca sequencial.
* **Manipulação de Vetores:** O código demonstra a passagem de um vetor como parâmetro para um objeto e a iteração sobre ele para processar os dados.

---

### ▶️ Como Executar o Projeto

Para compilar e rodar este projeto, você precisa de um compilador C++ (como o G++).

1.  Salve o código em um arquivo chamado `encontrar_maior_numero.cpp`.
2.  Abra seu terminal ou prompt de comando.
3.  Navegue até o diretório onde você salvou o arquivo.
4.  Compile o código com o seguinte comando:
    ```bash
    g++ encontrar_maior_numero.cpp -o encontrar_maior
    ```
5.  Execute o arquivo gerado:
    ```bash
    ./encontrar_maior
    ```