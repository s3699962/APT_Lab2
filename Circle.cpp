//
// Created by jeanette roga on 12/3/20.
//

#include "Circle.h"

class Circle {
public:
    double radius;

    void getRadius () {
        std::cout << "Enter a radius: ";
        std::cin >> radius;
    }

    double findCircleArea(double radius) {
        double area = Pi * radius * radius;
        return area;
    }
};