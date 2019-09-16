// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program calculates the area and perimeter of a circle

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15cm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is: " << (M_PI*pow(15.0, 2.0)) << "cm^2" << std::endl;
    std::cout << "Perimeter is: " << (2*M_PI*15) << "cm" << std::endl;
}
