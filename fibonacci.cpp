/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab2D

Description: This program attempts to find the first 60 Fibonacci numbers by keeping track of previous numbers with an array and computing new ones with a for loop. The first two Fibonacci numbers are initialized first outside the loop so that the for loop has at least two numbers to reference to for the next number. 

Fibonacci Program Comment: I observe that after the Fibonacci number reaches around 1 billion, the corresponding number turns negative, which messes up the remaining numbers in the array. I think the reason why the program "breaks" after reaching around 2 billion is because the C++ integer data type can only hold up to a range of -2147483648 to 2147483647, which is just over 2 billion. Since the Fibonacci numbers end up getting extremely larger and larger, the integer isn't able to hold the next Fibonacci number anymore and starts to output incorrect numbers for the remaining numbers. 
*/

#include <iostream>

int main()
{
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i<60; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	for (int i = 0; i<60; i++)
	{
		std::cout << fib[i] << std::endl;
	}
	return 0;
}
