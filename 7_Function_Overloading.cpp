// Function overloading in C++ allows you to define multiple functions with the same name but with different parameters.

#include<bits/stdc++.h>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14f * radius * radius;
}

int main() {
    int squareSide = 5;
    int rectangleLength = 4;
    int rectangleBreadth = 6;
    float circleRadius = 3.5;

    // Call area function for different shapes
    std::cout << "Area of square: " << area(squareSide) << std::endl;
    std::cout << "Area of rectangle: " << area(rectangleLength, rectangleBreadth) << std::endl;
    std::cout << "Area of circle: " << area(circleRadius) << std::endl;

    return 0;
}
