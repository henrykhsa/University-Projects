// Criando uma classe abstrata Animal com um método abstrato makeSound e um método concreto sleep
abstract class Animal {
    // Método abstrato que deve ser implementado pelas subclasses
    public abstract void makeSound();
    public abstract void TypeOfAnimal();
    // Método concreto que pode ser usado por todas as subclasses
    public void sleep() {
        System.out.println("ZZZzzz...");
    }
}

// Subclasse concreta

class Dog extends Animal {
    // Implementação do método makeSound para a classe Dog
    public void makeSound() {
        System.out.println("Woof!");
    }
    public void TypeOfAnimal() {
        System.out.println("É um animal doméstico!");
    }
}

class Cat extends Animal {
    // Implementação do método makeSound para a classe Cat
    public void makeSound() {
        System.out.println("Meow!");
    }
    public void TypeOfAnimal() {
        System.out.println("É um animal doméstico!");
    }
}

class Lion extends Animal {
    // Implementação do método makeSound para a classe Lion
    public void TypeOfAnimal() {
        System.out.println("É um animal selvagem!");
    }
    public void makeSound() {
        System.out.println("Roar!");
    }
}

// Classe principal para testar a hierarquia de classes
public class Main {
    public static void main(String[] args) {
        // Criando instâncias de Dog e Cat
        Animal dog = new Dog();
        Animal cat = new Cat();
        Animal lion = new Lion();

        // Chamando os métodos makeSound e sleep
        dog.makeSound(); // Saída: Woof!
        dog.sleep();     // Saída: ZZZzzz...

        cat.makeSound(); // Saída: Meow!
        cat.sleep();     // Saída: ZZZzzz...

        lion.makeSound(); // Saída: Roar!
        lion.sleep();     // Saída: ZZZzzz...
        lion.TypeOfAnimal(); // Saída: É um animal selvagem!
    }
}