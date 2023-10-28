#include <stdio.h>

/**
*main - entry point
*Description: prints the number passed to it
*@argc: int of arguments
*@argv: array of arguments
*Return: Always 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
