#include"main.h"

/**
*print_number - prints a number
*@n:number
*Description: prints the entered number
*Return: void
*/

void print_number(int n)
{
	unsigned int num;
	unsigned int reversedNum = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 0)
	{
		reversedNum = reversedNum * 10 + (num % 10);
		num /= 10;
	}

	while (reversedNum > 0)
	{
		_putchar((reversedNum % 10) + '0');
		reversedNum /= 10;
	}
}
