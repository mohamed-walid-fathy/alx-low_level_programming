#include<stdio.h>
/**
 * main - entry point of code
 *
 * Description : prints all single digit numbers
 *
 * Return: 0 in case of success
 **/
int main(void)
{
int x = 0;
while (x <= 9)
{
	printf("%i", x);
	x++;
}
printf("\n");

return (0);
}
