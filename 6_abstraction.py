# In Python, there's no direct equivalent of abstract classes and pure virtual functions as in C++. However, you can achieve similar functionality using Python's abstract base classes (ABCs) from the abc module.

from abc import ABC, abstractmethod
import math

# Abstract class
class Shape(ABC):
    # Abstract method for calculating area
    @abstractmethod
    def calculate_area(self):
        pass

    # Abstract classes can have non-abstract methods
    def display(self):
        print("This is a shape.")

# Derived class for rectangle
class Rectangle(Shape):
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

    # Override the calculate_area method
    def calculate_area(self):
        return self.length * self.breadth

# Derived class for circle
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    # Override the calculate_area method
    def calculate_area(self):
        return math.pi * self.radius * self.radius

def main():
    # Creating objects of different shapes
    rectangle = Rectangle(4, 6)
    circle = Circle(3.5)

    # Using polymorphic behavior to call calculate_area()
    print("Area of rectangle:", rectangle.calculate_area())
    print("Area of circle:", circle.calculate_area())

    # Using non-abstract method
    rectangle.display()
    circle.display()

if __name__ == "__main__":
    main()
