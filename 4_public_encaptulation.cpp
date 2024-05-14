#include<bits/stdc++.h>

using namespace std;

class A {
private:
    int value;

public:
    A(int value) : value(value) {}

    void display() {
        std::cout << value << std::endl;
    }
};

int main() {
    A obj(5);
    obj.display();

    obj = A(15); // Reassigning obj
    obj.display();

    return 0;
}
