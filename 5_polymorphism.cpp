// Polymorphism in C++ allows objects of different classes to be treated as objects of a common superclass.

#include<bits/stdc++.h>

using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual float calculate_area() {
        return 0;
    }
};

// Derived class for rectangle
class Rectangle : public Shape {
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    // Override the calculate_area function
    float calculate_area() override {
        return length * breadth;
    }
};

// Derived class for circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Override the calculate_area function
    float calculate_area() override {
        return 3.14f * radius * radius;
    }
};

// Function that uses polymorphism to calculate area
void print_area(Shape *shape) {
    std::cout << "Area: " << shape->calculate_area() << std::endl;
}

int main() {
    // Creating objects of different shapes
    Rectangle rectangle(4, 6);
    Circle circle(3.5);

    // Using polymorphic behavior
    print_area(&rectangle);
    print_area(&circle);

    return 0;
}
