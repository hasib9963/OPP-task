#include<bits/stdc++.h>
using namespace std;

// Base class 1
class Animal {
public:
    std::string name;
    void eat() {
        std::cout << name << " Can eat" << std::endl;
    }
};

// Base class 2
class Pet {
public:
    void play() {
        std::cout << "Playing with pet" << std::endl;
    }
};

// Derived class inheriting from both Animal and Pet
class Cat : public Animal, public Pet {
public:
    Cat(std::string name) {
        this->name = name;
    }
};

int main() {
    Cat obj("Cat");
    obj.eat();  // Accessing eat() from Animal class
    obj.play(); // Accessing play() from Pet class
    
    return 0;
}
