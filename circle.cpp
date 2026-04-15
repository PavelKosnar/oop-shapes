#include <iostream>
#include "circle.hpp"
#include "cmath"

Circle::Circle(double r) {
    this->r = r;
}

double Circle::Obsah() {
    return M_PI * this->r * this->r;
}

double Circle::Obvod() {
    return 2 * M_PI * this->r;
}