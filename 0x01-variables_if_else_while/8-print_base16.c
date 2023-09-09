#include<stdio.h>
/**
 * main - entry point of code
 *
 * Description : prints base 16 numbers in lowercase
 *
 * Return: 0 in case of success
 **/
int main(void)
{
int x = 48; /*48 in ASCII is 0*/
while (x <= 102)/*102 is f in ASCII*/
{
putchar(x);

/*after 9 we skip unitl 96*/
if (x == 57)
	x += 39;
x++;
}
putchar('\n');

return (0);
}
