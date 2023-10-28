#include <stdio.h>

/**
*main - entry point
*@argc: int of arguments
*@argv: unused array of arguments
*Return: Always 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
