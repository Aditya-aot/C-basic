//3.	WAP in Java with two classes create an object of a class and call into another class (having main method)

// Class 1:Person
class Person {
    String name;
    int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("Name:   " + name);
        System.out.println("Age: " + age);   

    }
}

// Class 2: MainClass
public class MainClass {
    public static void main(String[] args) {
        Person person1 = new Person("Alice", 30);
        person1.displayInfo();
    }
}
