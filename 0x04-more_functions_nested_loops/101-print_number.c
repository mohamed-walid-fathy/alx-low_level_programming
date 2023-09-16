#include"main.h"

/**
*print_number - prints a number
*@n:number
*Description: prints the entered number
*Return: void
*/

void print_number(int n)
{
	unsigned int digit;
	int p;

	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	else
	{
		p = n;
	}

	if (p > 9)
	{
		print_number(p / 10);
	}

	digit = p % 10;
	_putchar(digit + '0');
}
