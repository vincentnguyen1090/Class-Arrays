//
// Created by vince on 1/27/2023.
//
#include "testprint.h"

void testprintArray()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int numUsed = 5;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < numUsed; ++i) {
        std::cout << arr[i] << " ";
    }

}