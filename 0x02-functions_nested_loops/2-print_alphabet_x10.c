#include"main.h"
/**
*main - entry point of code
*
*Description : prints the lowercase alphabet
*
*Return: 0 in case of success
**/
void print_alphabet_x10(void);
int main(void)
{
        print_alphabet_x10 ();
        return (0);
}       
void print_alphabet_x10(void);
{       
        int i;
	int c;
	for (c = 0;c < 10; c++)
	{
        for (i = 97; i < 123; i++)
        {       
                putchar (i);
        }
        _putchar ('\n');
	}
}
