#include <iostream>
#include "shape.hpp"

class Circle : public Shape {
private:
    double r;
public:
    Circle(double r);
    
    double Obsah() override;
    double Obvod() override;

    std::string Rozmery() override;
    std::string Info() override;
};