#include"main.h"
/*
*
* print_alphabet_x10 : prints the lowercase alphabet ten times
*
*/
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
