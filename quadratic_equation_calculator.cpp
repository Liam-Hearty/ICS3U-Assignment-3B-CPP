// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program will calculate the root values of a quadratic function.


#include <iostream>
#include <cmath>

int main() {
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    float x3;


    std::cout << "Enter the value of a: " << std::endl;
    std::cin >> a;
    std::cout << "" << std::endl;
    std::cout << "Enter the value of b: " << std::endl;
    std::cin >> b;
    std::cout << "" << std::endl;
    std::cout << "Enter the value of c: " << std::endl;
    std::cin >> c;
    std::cout << "" << std::endl;
    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        std::cout << "x = " << x1 << std::endl;
        std::cout << "x = " << x2 << std::endl;
    } else if (d == 0) {
        x3 = (-b) / (2*a);
        std::cout << "The root is: " << x3 << std::endl;
    } else if (d < 0) {
        std::cout << "There are no roots." << std::endl;
    } else {
        std::cout << "That was not a proper value." << std::endl;
}
}
