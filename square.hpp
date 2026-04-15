#include <iostream>
#include "shape.hpp"

class Square : public Shape {
private:
    double a;
public:
    Square(double a);
    
    double Obsah() override;
    double Obvod() override;

    std::string Rozmery() override;
    std::string Info() override;
};