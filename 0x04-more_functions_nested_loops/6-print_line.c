#include"main.h"

/**
*print_line - prints a line
*@n: indicates how long the line will be
*Description: prints a line depending on n
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
