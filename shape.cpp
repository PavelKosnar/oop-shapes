#include <iostream>
#include <string>
#include "shape.hpp"

using namespace std;

Shape::Shape() {
    this->a = 0;
    this->b = 0;
    this->r = 0;
}

Shape::~Shape() {
    
}

double Shape::Obsah() {
    return 0;
}

double Shape::Obvod() {
    return 0;
}

string Shape::Rozmery() {
    return "Rozmery: A = " + to_string(this->a) + ", B = " + to_string(this->b) + ", Radius = " + to_string(this->r);
}

string Shape::Info() {
    return "Nespecifikovaný útvar -> " + this->Rozmery();
}