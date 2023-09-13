#include"main.h"
/**
*Description: displays sign of a number
*@n: input number
*Return: 1 for positive, 0 for 0, -1 for negative
**/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
