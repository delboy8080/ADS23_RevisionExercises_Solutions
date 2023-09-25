#include "DynamicMemory.h"

int totalArray(int* arr, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += *arr;
		arr++;
	}

	return total;
}
void dynamic_main1()
{
	cout << "\n\n\n=========  Pointers & Dynamic Memory   =================" << endl;
	int* arr = new int[5] {1,2,3,4,5};
	cout << "The total for this array is: " << totalArray(arr, 5) << endl;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void dynamic_main2()
{
	int* x = new int(1);
	int *y=new int(2);
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q2 =================" << endl;
	cout << "Before swap "<< "x: " << *x << " and y:" << *y << endl;
	swap(x, y);
	cout <<"After Swap " << "x: " << *x << " and y:" << *y << endl;

	delete x, y;

}


void reverse(int* arr, int size)
{
	int *st = arr;
	int *en = arr + size-1;
	while (st < en)
	{
		swap(st, en);
		st++;
		en--;
	}
}
void dynamic_main3()
{

	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q3 =================" << endl;
	int* arr = new int[5] {1, 2, 3, 4, 5};
	cout << "Before Reverse: ";
	display(arr, 5);
	reverse(arr, 5);
	cout << "After reverse: ";
	display(arr, 5);


}


int countEven(int* arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (( * arr & 1) == 0)
		{
			count++;
		}
		arr++;
	}
	return count;
}
void dynamic_main4()
{

	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q4 =================" << endl;
	int* arr = new int[5] {1, 2, 3, 4, 5};
	cout << "Original Array: ";
	display(arr, 5);
	cout << "Count of even: " << countEven(arr, 5) << endl;
}

double* getMax(double* arr, int size)
{
	if (size == 0)
		return nullptr;
	double* max = arr;
	for (int i = 1; i < size; i++)
	{
		if (*max < arr[i])
		{
			max = &arr[i];
		}
	}
	return max;

}
void dynamic_main5()
{
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q5 =================" << endl;
	double* arr = new double[5] {1.2,2.3,3.4,9.5,4.5};
	cout << "Maximum Value: " << *getMax(arr, 5) << endl;
}

string encrypt(const string &s, int shift)
{
	shift = shift % 26;
	string encrypted = "";
	char newC;
	for (char c : s)
	{
		newC = c;
		if (c >= 'A' && c <= 'Z')
		{
			newC = c + shift;
			if (newC > 'Z')
			{
				newC -= 26;
			}
		}
		else if (c >= 'a' && c <= 'z')
		{
			newC = c + shift;
			if (newC > 'z')
			{
				newC -= 26;
			}
		}
		encrypted += newC;
	}
	return encrypted;
}

string decrypt(const string &s, int shift)
{
	shift = shift % 26;
	string decrypted = "";
	char newC;
	for (char c : s)
	{
		newC = c;
		if (c >= 'A' && c <= 'Z')
		{
			newC = c - shift;
			if (newC < 'A')
			{
				newC += 26;
			}
		}
		else if (c >= 'a' && c <= 'z')
		{
			newC = c - shift;
			if (newC < 'a')
			{
				newC += 26;
			}
		}
		decrypted += newC;
	}
	return decrypted;
}
void dynamic_main6()
{
	cout << "\n\n============= Pointers Question 6 =============" << endl;
	string msg;
	cout << "Please enter a message to encrrypt:";
	getline(cin, msg);
	string enc = encrypt(msg, 5);
	cout << "Encrypted: " << enc << endl;

	string decrypted = decrypt(enc, 5);
	cout << "Decrypted: " << decrypted;


}