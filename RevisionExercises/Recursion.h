#include <iostream>

using namespace std;
/*

Write a short recursive C++ function that determines if a string s is a palindrome, that is, it is
equal to its reverse. For example, "racecar" and "gohangasalamiimalasagnahog" are
palindromes.
*/
bool isPalindrome(const string& s, int p = 0);
/*
 Write a short recursive C++ function that finds the minimum and maximum values in an
array of int values without using any loops
*/

void minMax(int* arr, int size, int& min, int& max, int pos=0);

/*

3. Write a short recursive C++ function that takes a character string s and outputs its reverse.
So for example, the reverse of "pots&pans" would be "snap&stop".
*/
string reverse(const string& s, int p = 0);

/*
4. Describe a recursive function for converting a string of digits into the integer it represents.
For example, "13531" represents the integer 13,531.
*/

int convertToInt(const string& s, int p = 0);


/*
5. Write a short recursive C++ function that will find 2^x
*/
int power(int x, int y);

