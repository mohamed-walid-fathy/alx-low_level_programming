#include<stdio.h>
/**
 * main - entry point of code
 *
 * Description : prints lowercase alphabet in reverse
 *
 * Return: 0 in case of success
 **/
int main(void)
{
char x = 'z';
while (x >='a')
{
	putchar(x);
	x--;
}
putchar('\n');

return (0);
}
