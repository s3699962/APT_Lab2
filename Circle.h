//
// Created by jeanette roga on 12/3/20.
//

#ifndef LAB2_CIRCLE_H
#define LAB2_CIRCLE_H
#define Pi 3.14159

#include <iostream>

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

#endif //LAB2_CIRCLE_H
