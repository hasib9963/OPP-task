import math

# Base class
class Shape:
    # Virtual function for calculating area
    def calculate_area(self):
        return 0

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

# Function that uses polymorphism to calculate area
def print_area(shape):
    print("Area:", shape.calculate_area())

def main():
    # Creating objects of different shapes
    rectangle = Rectangle(4, 6)
    circle = Circle(3.5)

    # Using polymorphic behavior
    print_area(rectangle)
    print_area(circle)

if __name__ == "__main__":
    main()
