
#include "pch.h"
#include <iostream>
#include "doubleNumber.h"

void printStuff()
{
	int x = userNumber();
	std::cout << x << " doubled is:" << doubleNumber(x) << std::endl;
	printStuff1();
}

void printStuff1()
{
	int x = userNumber();
	std::cout << x << " doubled is:" << doubleNumber(x) << std::endl;
	printStuff();
}
