#include"main.h"

/**
*print_square - prints a square
*@size:size of square
*Description:prints a square that is size long
*Return:void
*/

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
	for (column = 1; column <= size; column++)
	{
		for (row = 1; row <= size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
