# In Python, there's no direct concept of multiple inheritance.

class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(self.name, "can eat")

class Pet:
    def play(self):
        print("Playing with pet")

# Derived class inheriting from both Animal and Pet
class Cat(Animal, Pet):
    def __init__(self, name):
        super().__init__(name)

# Main function
def main():
    obj = Cat("Cat")
    obj.eat()   # Accessing eat() from Animal class
    obj.play()  # Accessing play() from Pet class

if __name__ == "__main__":
    main()
