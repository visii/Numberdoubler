
#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

void printStuff()
{
	int64_t x{ userNumber() };
	std::cout << x << " doubled is:" << doubleNumber(x) << std::endl;
	printStuff1();
}

void printStuff1()
{
	int64_t x{ userNumber() };
	std::cout << x << " doubled is:" << doubleNumber(x) << std::endl;
	printStuff();
}
