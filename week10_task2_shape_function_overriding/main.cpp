#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a general shape\n";
    }

    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Triangle\n";
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    Shape* shapePointer = nullptr;

    shapePointer = &circle;
    shapePointer->draw();

    shapePointer = &rectangle;
    shapePointer->draw();

    shapePointer = &triangle;
    shapePointer->draw();

    return 0;
}
