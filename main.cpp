#include <iostream>
#include <vector>

#include "shape.hpp"
#include "rect.hpp"
#include "circle.hpp"
#include "square.hpp"

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(new Rect(4.0, 5.0));
    shapes.push_back(new Circle(3.0));
    shapes.push_back(new Square(2.0));

    for (auto* shape : shapes) {
        shape->Info();
        std::cout << " -> Obsah: " << shape->Obsah() 
                  << ", Obvod: " << shape->Obvod() << std::endl;
    }

    for (auto* shape : shapes) {
        delete shape;
    }

    return 0;
}