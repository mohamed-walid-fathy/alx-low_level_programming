#include<stdio.h>
/**
 *main - entry point of code
 *
 *Description : prints all alphabetic characters
 *
 *Return: 0 in case of success
 **/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
	putchar(x);
	x++;
}
printf("\n");

return (0);
}
