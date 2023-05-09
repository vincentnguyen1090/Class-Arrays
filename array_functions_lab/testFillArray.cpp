//
// Created by vince on 1/27/2023.
//
#include "testFillArray.h"

void fillArray()
{
    int arr[10];
    int size = 10;

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 50;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}