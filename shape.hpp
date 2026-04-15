#pragma once

#include <iostream>

class Shape {
protected:
    double a, b, r;

public:
    Shape();
    virtual ~Shape();

    virtual double Obsah();
    virtual double Obvod();

    virtual std::string Rozmery();
    virtual std::string Info();
};