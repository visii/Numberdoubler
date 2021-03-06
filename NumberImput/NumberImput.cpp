// NumberImput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

bool isZero(int64_t x)
{
	return (x == 0);
}

int64_t doubleNumber(int64_t x)
{
	return x * 2;
}

int64_t userNumber()
{
	std::cout << "Enter a number to double:" ;
	int64_t x;
	std::cin >> x;
	if (isZero(x))
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		error();
	}
	else 
		return x;
}

int main()
{
	printStuff();
	return 0;
}


