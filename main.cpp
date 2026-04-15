#include <iostream>
#include <vector>

#include "shape.hpp"
#include "rect.hpp"
#include "circle.hpp"
#include "square.hpp"

using namespace std;

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Rect(4.0, 5.0));
    shapes.push_back(new Circle(3.0));
    shapes.push_back(new Square(2.0));

    for (auto* shape : shapes) {
        cout << shape->Info() << ", Obsah: " << shape->Obsah() << ", Obvod: " << shape->Obvod() << endl;
    }

    for (auto* shape : shapes) {
        delete shape;
    }

    return 0;
}