// NumberImput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

void error()
{
	std::cout << "Please enter a valid number."  << std::endl;
	userNumber();
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
	if (x != 0)
		return x;
	if (x == 0)
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		error();
}




int main()
{
	printStuff();
	return 0;
}


