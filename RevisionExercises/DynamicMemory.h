#include <iostream>
#include <string>
#include "Utils.h"
using namespace std;

/*
1. Create a dynamic array of 5 integers and write a function to find the total of the array
*/
int totalArray(int* arr, int size);
void dynamic_main1();

/*
2. Write a function to swap the values of two pointers

*/
void swap(int* x, int* y);
void dynamic_main2();
/*
3. Write a C++ program to reverse an array using pointers.
*/
void reverse(int* arr, int size);
void dynamic_main3();

/*
 4. Write a function countEven(int*, int) which receives an integer array and its size, and returns
the number of even numbers in the array.
*/
int countEven(int* arr, int size);
void dynamic_main4();

/*
5. Write a function that returns a pointer to the maximum value of an array of double's. If the
array is empty, return NULL.
*/
double* getMax(double* arr, int size);
void dynamic_main5();

/*
6. Write a encrypt and decrypt function to implement a Caesar (or shift) cipher using pointers
*/

string encrypt(const string& s, int shift);
string decrypt(const string& s, int shift);

void dynamic_main6();
