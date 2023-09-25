#include "Recursion.h"

bool isPalindrome(const string &s, int p)
{
	if (s[p] != s[s.length() - 1 - p])
	{
		return false;
	}
	if (s.length() / 2 - p < 2)
	{
		return true;
	}
	return isPalindrome(s, p + 1);
}

void minMax(int* arr, int size, int& min, int& max, int pos)
{
	if (pos == size)
		return;
	if (arr[pos] < min)
	{
		min = arr[pos];
	}
	if (arr[pos] > max)
	{
		max = arr[pos];
	}
	if (pos == 0)
	{
		min = max = arr[pos];
	}
	minMax(arr, size, min, max, pos + 1);
}

string reverse(const string& s, int p)
{
	if (p == s.length())
	{
		return "";
	}
	return reverse(s, p + 1) + s[p];
}

int convertToInt(const string& s, int p)
{
	if (s.length() == p)
		return 0;
	return (convertToInt(s, p + 1) * 10) + s[s.length() - p - 1] - '0';
}


int power(int x, int y)
{
	if (y == 0)
		return 1;
	return x * power(x, y - 1);
}