// NumberImput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

double doubleNumber(double x)
{
	return x * 2;
}

double userNumber()
{
	int64_t x;
	std::cout << "Enter a number to double:" ;
	std::cin >> x;
	return x;
}

int main()
{
	printStuff();
	return 0;
}


