#include<stdio.h>
/**
 * main - entry point of code
 *
 * Description : prints all alphabetic characters
 *
 * Return: 0 in case of success
 **/
int main(void)
{
char x = 'a';
char X = 'A';
while (x <= 'z')
{
	putchar(x);
	x++;
}
while (X <= 'Z')
{
	putchar(X);
	X++;
}
printf("\n");

return (0);
}
