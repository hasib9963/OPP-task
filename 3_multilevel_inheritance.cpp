#include <iostream>
#include <string>

// Base class
class Animal {
public:
    std::string name;
    void eat() {
        std::cout << name << " can eat" << std::endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        std::cout << name << " can bark" << std::endl;
    }
};

// Derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    void guard() {
        std::cout << name << " can guard" << std::endl;
    }
};

int main() {
    GermanShepherd dog;
    dog.name = "Rex";
    dog.eat();    // Accessing eat() from Animal class
    dog.bark();   // Accessing bark() from Dog class
    dog.guard();  // Accessing guard() from GermanShepherd class

    return 0;
}
