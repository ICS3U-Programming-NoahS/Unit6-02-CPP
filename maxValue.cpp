// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Dec. 15th, 2023
// This program generates 10 random numbers
// then finds and displays the max of those numbers
#include <iostream>
#include <array>
#include <time.h>

int calcMax(std::array<int, 10> randomNumbers) {
    const int ARRAY_SIZE = 10;
    int maximum = randomNumbers[0];
    int counter = 0;
    while (counter < ARRAY_SIZE - 1) {
        counter = counter + 1;
        if (randomNumbers[counter] > maximum) {
            maximum = randomNumbers[counter];
        }
    }
    return maximum;
}

int main() {
    // Declare constants
    const int ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Initialize empty list
    std::array<int, 10> listOfInt;

    // seed value
    srand(time(NULL));

    for (int counter = 0; counter < ARRAY_SIZE; counter++) {
        listOfInt[counter] = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        std::cout << listOfInt[counter] << " added to the list at position ";
        std::cout << counter << "." << std::endl;
    }

    // Function call
    int maximum = calcMax(listOfInt);

    // Display average
    std::cout << " " << std::endl;
    std::cout << "The max number is " << maximum << "." << std::endl;
}
