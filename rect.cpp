#include <iostream>
#include "rect.hpp"

Rect::Rect(double a, double b) {
    this->a = a;
    this->b = b;
}


double Rect::Obsah() {
    return this->a * this->b;
}

double Rect::Obvod() {
    return 2 * (this->a + this->b);
}