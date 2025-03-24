// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-23-2025
// This program makes a gambling number guess

#include <iostream>  
#include <cstdlib>

int main(){
    // gets number from user and declares the variable for it
    int userNumber;
    std::cout << "Insert random number from 0 to 9";
    std::cin >> userNumber;
    // generates random number
    int randomNumber = rand() % 10;
    //compares if numbers are the same, if they are displays win message
    if (userNumber == randomNumber) {
        std::cout << "You've guessed correctly. \n";
    }
    // if they are not the same then generates lose message and correct number
    else {
        std::cout << "Your guess is incorrect, the number is " << randomNumber << std::endl;
    }
}