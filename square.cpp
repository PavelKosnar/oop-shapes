#include <iostream>
#include <string>
#include "square.hpp"

using namespace std;

Square::Square(double a) {
    this->a = a;
}


double Square::Obsah() {
    return this->a * this->a;
}

double Square::Obvod() {
    return 4 * this->a;
}

string Square::Rozmery() {
    return "Rozmery: A = " + to_string(this->a);
}

string Square::Info() {
    return "Ctverec -> " + this->Rozmery();
}