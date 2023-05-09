//
// Created by vince on 1/27/2023.
//
#include "functions.h"
#include <iostream>
//why do we need to fill array with default value when we are just going to fill the array with random numbers

//[1 2 3 4 5]
//right at index 2
//[1 2 3 3 4]
//[1 2 3 3 4 5 6 7 8 9]
//left at index 2
//[1 2 4 5 5]
//[1 2 4 5 6 7 8 9 10 10]

void fill(int array[], int size, int defaultValue)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] = defaultValue; //fills array with default value
    }
}
void fill(int array[], int numUsed)
{
    for (int i = 0; i < numUsed; ++i)
    {
        //fills array with random numbers ranging to 20
        array[i] = rand() % 20;
    }
}
void print(int array[], int size, int numUsed)
{
    for(int i = 0; i < numUsed; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
void print(int array[], int numUsed)
{
    //doesn't print last number of array
    for(int i = 0; i < numUsed - 1; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
void shiftLeft(int array[], int size, int& numUsed, int index)
{
    for (int i = index; i < numUsed; i++)
    {
        //moves all elements to left
        array[i] = array[i+1];
    }
}
void remove(int arr[], int size, int& numUsed, int value)
{
    for(int i = 0; i < numUsed; i++)
    {
        //finds index at value
        if(arr[i] == value)
        {
            value = i;
            shiftLeft(arr, size, numUsed, value);
            break;
        }
    }
}
void shiftRight(int array[], int size, int& numUsed, int index)
{
    //stores value in temp
    int temp = array[numUsed];
    for (int i = numUsed - 1; i >= index; i--)
    {
        //moves all elements to the right
        array[i+1] = array[i];
    }
    //stores value at indicated index
    array[index] = temp;
}
void insert(int arr[], int size, int& numUsed, int value, int index)
{
    //store value at last element
    arr[numUsed] = value;
    shiftRight(arr, size, numUsed, index);
}
void run()
{
    const int size = 20;
    int defaultValue = 0, numUsed = 10, index, value;
    int array[size];
    fill(array, size, defaultValue);
    fill(array, numUsed);
    std::cout << "Original Array: ";
    print(array, size, numUsed);
    std::cout << "Which value would you like to be removed?: ";
    std::cin >> value;
    remove(array, size, numUsed, value);
    std::cout << "Removes the first " << value << "\n";
    std::cout << "Array: ";
    print(array, numUsed);
    std::cout << "\n";

    //second array
    fill(array, numUsed);
    std::cout << "Original Array: ";
    print(array, size, numUsed);
    std::cout << "Which value would you like to insert?: ";
    std::cin >> value;
    std::cout << "At which index?: ";
    std::cin >> index;
    insert(array, size, numUsed, value, index);
    std::cout << "Array: ";
    print(array, size, numUsed);

}