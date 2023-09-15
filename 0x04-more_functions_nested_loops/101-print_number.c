#include"main.h"

/**
*print_number - prints a number
*@n:number
*Description: prints the entered number
*Return: void
*/

void print_number(int n)
{
	if( n > 0)
	{
		while (n > 0)
		{
			int digit = n % 10;
			_putchar(digit);
			n /= 10;
		}
	}
	else
	{
		_putchar('-');
		int p = n * -1;
		while (p > 0)
		{
			int digit2 = n % 10;
			_putchar(digit2);
			p /= 10;
		}
	}
}
