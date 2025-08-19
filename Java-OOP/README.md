<h1 align="center">☕ Conceitos de Orientação a Objetos em Java</h1>

<p align="center">
  Um projeto simples para demonstrar princípios de OOP, como herança e polimorfismo.
</p>

---

### 📜 Sobre o Projeto

Este código foi desenvolvido para ilustrar de forma clara e prática os conceitos fundamentais da **Programação Orientada a Objetos (POO)** na linguagem Java. O projeto utiliza uma hierarquia de classes simples para mostrar como a herança e o polimorfismo funcionam.

---

### 🧠 Conceitos Aplicados

* **Classes Abstratas:** A classe `Animal` é abstrata, definindo um contrato (`makeSound()`, `TypeOfAnimal()`) que suas subclasses devem seguir.
* **Herança:** As classes `Dog`, `Cat` e `Lion` herdam da classe `Animal`, reutilizando e implementando seus métodos.
* **Polimorfismo:** No método `main`, instâncias de diferentes subclasses são tratadas como o tipo `Animal`, permitindo que o mesmo método (`makeSound()`, `sleep()`) tenha comportamentos distintos.
* **Encapsulamento:** Embora não seja o foco principal, a estrutura de classes promove uma boa organização do código.

---

### ▶️ Como Executar o Projeto

Para compilar e rodar este projeto, você precisa ter o **JDK (Java Development Kit)** instalado em sua máquina.

1.  Salve o código em um arquivo chamado `Main.java`.
2.  Abra seu terminal ou prompt de comando.
3.  Navegue até o diretório onde você salvou o arquivo.
4.  Compile o código com o seguinte comando:
    ```bash
    javac Main.java
    ```
5.  Execute o arquivo gerado:
    ```bash
    java Main
    ```