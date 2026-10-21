// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 10,21,2026
// This program gets a number and tells
// the user if it is positive, negative or 0
#include <iostream>


int main() {
    float number;

    // Get guessed number from the user

    std::cout << "Enter your number: ";
    std::cin >> number;

    // Check if the user is correct or not

    if (number > 0) {
        std::cout << "Your number is positive";
    } else if (number < 0) {
        std::cout << "Your number is negative";
    } else if (number == 0) {
        std::cout << "Your number is 0";
    } else {
        std::cout << "Your number is not a valid number";
    }
}
