#include<stdio.h>
/**
 * main - entry point of code
 *
 * Description : prints 0 , 1, ...9
 *
 * Returns 0 in case of success
 **/
int main(void)
{
int x = 0;
while (x <= 9)
{
	putchar(x+48);

	if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
x++;
}
putchar('\n');

return (0);
}
