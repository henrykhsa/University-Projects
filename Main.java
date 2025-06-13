// Criando uma classe abstrata Animal com um método abstrato makeSound e um método concreto sleep
abstract class Animal {
    // Método abstrato que deve ser implementado pelas subclasses
    public abstract void makeSound();
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
}

class Cat extends Animal {
    // Implementação do método makeSound para a classe Cat
    public void makeSound() {
        System.out.println("Meow!");
    }
}

// Classe principal para testar a hierarquia de classes
public class Main {
    public static void main(String[] args) {
        // Criando instâncias de Dog e Cat
        Animal myDog = new Dog();
        Animal myCat = new Cat();

        // Chamando os métodos makeSound e sleep
        myDog.makeSound(); // Saída: Woof!
        myDog.sleep();     // Saída: ZZZzzz...

        myCat.makeSound(); // Saída: Meow!
        myCat.sleep();     // Saída: ZZZzzz...
    }
}