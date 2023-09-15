#include"main.h"

/**
*print_diagonal - prints a diagonal
*@n:operand
*Description: prints a diagonal that is n long
*Return: void
*/

void print_diagonal(int n)
{
	int diagonal;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (space = 0; space < diagonal; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
