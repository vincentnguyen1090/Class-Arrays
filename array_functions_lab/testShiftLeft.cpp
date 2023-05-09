//
// Created by vince on 1/27/2023.
//
#include "testShiftLeft.h"
void testShiftLeft()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int value = 5;
    for (int i = value; i < size-1; ++i) {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}
