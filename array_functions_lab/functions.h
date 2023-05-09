//
// Created by vince on 1/27/2023.
//

#ifndef ARRAY_FUNCTIONS_LAB_FUNCTIONS_H
#define ARRAY_FUNCTIONS_LAB_FUNCTIONS_H

//fills array with defaultValue
void fill(int array[], int size, int defaultValue);
//prints all used variable in array
void print(int array[], int size, int numUsed);
//fills array with random values
void fill(int array[], int numUsed);
//shifts all values to the left, starting at index
void shiftLeft(int array[], int size, int& numUsed, int index);
//shifts all values to the right, starting at index
void shiftRight(int array[], int size, int& numUsed, int index);
//remove first instance of value from the array
void remove(int arr[], int size, int& numUsed, int value);
//insert value at given index
void insert(int arr[], int size, int& numUsed, int value, int index);
void run();
#endif //ARRAY_FUNCTIONS_LAB_FUNCTIONS_H
