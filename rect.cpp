#include <iostream>
#include <string>
#include "rect.hpp"

using namespace std;

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

string Rect::Rozmery() {
    return "Rozmery: A = " + to_string(this->a) + ", B = " + to_string(this->b);
}

string Rect::Info() {
    return "Obdelnik -> " + this->Rozmery();
}