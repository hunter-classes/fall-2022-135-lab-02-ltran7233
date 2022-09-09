/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab2C

Description: This program sets an int array with 10 elements with initial values of "1". The program then asks the user to input a valid index to change and the value they want to change the element to. It will only change the element if the number is in the correct range for the index of the array. The program will continue to ask the user to update the elements of the array until they input an index outside of the range of 0 to 9, ending with an error message stating the problem. 
*/

#include <iostream>

int main()
{
	int myData[10];
	for (int num=0; num<10; num++)
	{
		myData[num] = 1;
	}

	int index = 0;
	do
	{
		std::cout << std::endl;
		for (int num=0; num<10; num++)
		{
			std::cout << myData[num] << " ";
		}
		std::cout << "\n\nInput valid index: ";
		std::cin >> index;
		int value = 0;
		std::cout << "\nInput a value: ";
		std::cin >> value;
		if ((index > -1) && (index < 10))
		{
			myData[index] = value;
		}
	}
	while ((index > -1) && (index < 10));

	std::cout << "\nIndex out of range. Exit." << std::endl;

	return 0;
}
