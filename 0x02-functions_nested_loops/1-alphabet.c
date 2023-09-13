#include"main.h"
/**
*main - entry point of code
*
*Description : prints the lowercase alphabet
*
*Return: 0 in case of success
**/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
