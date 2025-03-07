// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void stringReverse(const char* str)
{
	if (*str)
	{
		stringReverse(str + 1);
		printf("%c", *str);
	}
}



int main()
{
    std::cout << "Hello World!\n";
	stringReverse("Hello World");
}


