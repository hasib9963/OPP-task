# In Python, function overloading is not directly supported as in C++

import math

# Function to calculate the area of a square
def area(side):
    return side * side

# Function to calculate the area of a rectangle
def area_rectangle(length, breadth):
    return length * breadth

# Function to calculate the area of a circle
def area_circle(radius):
    return math.pi * radius * radius

def main():
    square_side = 5
    rectangle_length = 4
    rectangle_breadth = 6
    circle_radius = 3.5

    # Call area functions for different shapes
    print("Area of square:", area(square_side))
    print("Area of rectangle:", area_rectangle(rectangle_length, rectangle_breadth))
    print("Area of circle:", area_circle(circle_radius))

if __name__ == "__main__":
    main()
