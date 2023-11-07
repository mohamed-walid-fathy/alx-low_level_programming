#include <stdlib.h>
#include <stdio.h>

/**
*main - entry point
*@argc: int of arguments
*@argv: unused array of arguments
*Return: 0 for success, 1 for error
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;


		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);

	return (0);
}
