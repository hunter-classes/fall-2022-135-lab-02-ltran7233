#include <iostream>
#include "funcs.h"

void print_interval(int L, int U)
{
	int num = 0;	
	for (int i = L; i < U; i++)
	{
		num = i;
		std::cout << num << " ";
		num++;
	}
}
