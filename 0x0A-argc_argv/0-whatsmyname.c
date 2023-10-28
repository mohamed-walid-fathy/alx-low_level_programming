#include <stdio.h>

/**
*main - entry point
*Description: prints program name
*argc: int of arguments
*argv: array of arguments
*Return: Always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s \n", argv[argc]);
	return (0);
}
