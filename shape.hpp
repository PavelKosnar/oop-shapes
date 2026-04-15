#pragma once

#include <iostream>

class Shape {
public:
    virtual ~Shape() {}

    virtual double Obsah() = 0;
    virtual double Obvod() = 0;

    virtual void Info();
};