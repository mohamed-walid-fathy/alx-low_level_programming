#include<stdio.h>
/**
 * main - entry point of code
 * 
 * Description : prints all combinations of 2 digits
 * 
 * Return: Always 0
 **/
int main(void)
{
	int x = 0, y;
	while (x<=9)
	{
		y=0;
	while(y<=9)
	{
	if (x != y && x < y)
	{
		putchar(x + 48);
		putchar(y + 48);
	}
	if (x + y != 17)
	{
		putchar(',');
		putchar(' ');
	}
	y++;
	}
	x++;
	}
putchar('\n');

return (0);
}
