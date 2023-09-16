#include"main.h"

/**
*print_number - prints a number
*@n:number
*Description: prints the entered number
*Return: void
*/

void print_number(int n)
{
	unsigned int digit, digit2;
	int p;

	if(n > 0)
	{
		while (n > 0)
		{
			digit = n % 10;
			_putchar(digit + '0');
			n /= 10;
		}
	}
	else
	{
		_putchar('-');
		p = -n;
		while (p > 0)
		{
			digit2 = n % 10;
			_putchar(digit2 + '0');
			p /= 10;
		}
	}
}
