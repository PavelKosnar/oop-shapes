#include <iostream>
#include <string>
#include "circle.hpp"
#include "cmath"

using namespace std;

Circle::Circle(double r) {
    this->r = r;
}

double Circle::Obsah() {
    return M_PI * this->r * this->r;
}

double Circle::Obvod() {
    return 2 * M_PI * this->r;
}

string Circle::Rozmery() {
    return "Rozmery: Radius = " + to_string(this->r);
}

string Circle::Info() {
    return "Kruh -> " + this->Rozmery();
}