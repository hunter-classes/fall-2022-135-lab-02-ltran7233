/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab2C

Description: 
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
