#include<stdlib.h>
#include <stdio.h>

/**
*main - entry point
*@argc: int of arguments
*@argv: unused array of arguments
*Return: 0 for success, 1 for error
*/

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
