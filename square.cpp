#include <iostream>
#include "square.hpp"

Square::Square(double a) {
    this->a = a;
}


double Square::Obsah() {
    return this->a * this->a;
}

double Square::Obvod() {
    return 4 * this->a;
}