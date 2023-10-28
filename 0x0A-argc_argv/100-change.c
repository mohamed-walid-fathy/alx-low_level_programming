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
	int change;
	int coincounter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		while (change >= 25)
		{
			change -= 25;
			coincounter++;
		}
		while (change >= 10)
		{
			change -= 10;
			coincounter++;
		}
		while (change >= 5)
		{
			change -= 5;
			coincounter++;
		}
		while (change >= 2)
		{
			change -= 2;
			coincounter++;
		}
		while (change >= 1)
		{
			change -= 1;
			coincounter++;
		}
	}
	printf("%d\n", coincounter);
	return (0);
}
