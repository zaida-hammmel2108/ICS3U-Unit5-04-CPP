// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Dec 2022
// This program calculates volume of a cylinder

#include <cmath>
#include <iostream>
#include <string>

double CalculateVolume(int radius, int height) {
    double volume;

    // calculate volume
    volume = round(M_PI * pow(radius, 2) * height * 100) / 100;
    return volume;
}

int main() {
    std::string strRadius;
    std::string strHeight;
    int radius;
    int height;
    double volume;

    // input
    std::cout << "This program calculates the volume of a cylinder."
              << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> strRadius;
    std::cout << "Enter the height (cm): ";
    std::cin >> strHeight;

    // process and output
    try {
        radius = std::stoi(strRadius);
        height = std::stoi(strHeight);
        // call functions
        volume = CalculateVolume(radius, height);
        std::cout << "Volume of a cylinder with a radius of " << radius <<
        " cm and a height of " << height << " cm is " << volume << "cm³.";
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid input.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
