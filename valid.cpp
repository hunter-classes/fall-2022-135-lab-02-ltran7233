/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab2A

Description: This program will ask the user to input a valid integer that is only between 1 and 99. If the integer goes below or above the conditions set, the program will loop and ask for a different integer until it fits the conditionals. Then, the program will take the valid integer and print out the integer squared.
*/


#include <iostream>
#include <cmath>

int main()
{
	int num = 0;
	std::cout << "Enter a valid integer between 1 and 99: ";
	std::cin >> num;
	while ((num < 1) || (num > 99))
	{
		std::cout << "\nPlease enter another integer: ";
		std::cin >> num;
	}
	int squared = std::pow(num, 2);
	std::cout << "\n\nThe integer squared is " << squared << std::endl;

	return 0;
}
