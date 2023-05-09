//
// Created by vince on 1/27/2023.
//
#include "testShiftRight.h"

void testShiftRight()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int index = 4;

    int temp = arr[index];
    for (int i = size - 1; i >= index; i--) {
        arr[i+1] = arr[i];
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    arr[index] = temp;

}