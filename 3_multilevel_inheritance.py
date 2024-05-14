class Animal:
    def __init__(self):
        self.name = ""

    def eat(self):
        print(self.name, "can eat")

class Dog(Animal):
    def bark(self):
        print(self.name, "can bark")

class GermanShepherd(Dog):
    def guard(self):
        print(self.name, "can guard")

def main():
    dog = GermanShepherd()
    dog.name = "Rex"
    dog.eat()    # Accessing eat() from Animal class
    dog.bark()   # Accessing bark() from Dog class
    dog.guard()  # Accessing guard() from GermanShepherd class

if __name__ == "__main__":
    main()
