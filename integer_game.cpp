// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to input a integer and
// the program with tell them if its positive, negative or zero

#include <iostream>

int main() {
// this function checks if the user picked the correct number
    int integer_input;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> integer_input;
    std::cout << "" << std::endl;

    // process
    if (integer_input > 0) {
    std::cout << "This is a positive number!";
} else if (integer_input < 0) {
    std::cout << "This is a negative number!";
} else if (integer_input == 0) {
    std::cout << "This number is just zero!";
} else {
    std::cout << "No idea!";
}
std::cout << std::endl;
            std::cout << "\nDone.";
}
