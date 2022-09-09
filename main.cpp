/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab2B

Description: This program takes a function from the "funcs.h" file to print out the range of integers between the lowest num parameter and the upper num parameter (not including the highest int). In the funcs.h file, it checks if itself has already been defined, and to run itself when it has not been defined yet. It references the signature of the function from "funcs.cpp", which takes two parameters in a for loop to get the range of numbers.
*/

#include <iostream>
#include "funcs.h"

int main()
{
	print_interval(-5,10);
	std::cout << std::endl;
	print_interval(-20,-1);
	std::cout << std::endl;
	print_interval(12,33);
	std::cout << std::endl;
	print_interval(4,9);
	std::cout << std::endl;
	print_interval(-8,17);
	std::cout << std::endl;
	print_interval(39,57);
	std::cout << std::endl;
	return 0;
}
