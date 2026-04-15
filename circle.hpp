#include <iostream>
#include "shape.hpp"

class Circle : public Shape {
private:
    double r;
public:
    Circle(double r) : r(r) {}
    
    double Obsah() override;
    double Obvod() override;
};