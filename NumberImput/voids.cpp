
#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

void printStuff()
{
	int64_t y{ userNumber() };
	std::cout << y << " doubled is: " << doubleNumber(y) << std::endl;
	printStuff1();
}

void printStuff1()
{
	int64_t y{ userNumber() };
	std::cout << y << " doubled is:" << doubleNumber(y) << std::endl;
	printStuff();
}

void error()
{
	std::cout << "Please enter a valid number." << std::endl;
	userNumber();
}