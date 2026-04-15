#include <iostream>
#include "shape.hpp"

class Rect : public Shape {
private:
    double a, b;
public:
    Rect(double a, double b);
    
    double Obsah() override;
    double Obvod() override;
};