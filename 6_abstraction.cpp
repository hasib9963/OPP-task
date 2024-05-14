#include<bits/stdc++.h>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function for calculating area
    virtual float calculate_area() = 0;

    // Abstract classes can have non-virtual member functions
    void display() {
        std::cout << "This is a shape." << std::endl;
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

int main() {
    // Creating objects of different shapes
    Rectangle rectangle(4, 6);
    Circle circle(3.5);

    // Using polymorphic behavior to call calculate_area()
    std::cout << "Area of rectangle: " << rectangle.calculate_area() << std::endl;
    std::cout << "Area of circle: " << circle.calculate_area() << std::endl;

    // Using non-virtual member function
    rectangle.display();
    circle.display();

    return 0;
}
