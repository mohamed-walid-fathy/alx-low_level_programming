#include <stdio.h>
/**
*main - Entry point
*
*Description: A C program that prints size of various types using printf
*
*Return: 0
**/
int main(void) 
{
printf("size of a char: %u byte(s)\n", sizeof(char));
printf("size of an int: %u byte(s)\n", sizeof(int));
printf("size of a long int: %u byte(s)\n", sizeof(long int));
printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("size of a float: %u byte(s)\n", sizeof(float));
printf("size of a double: %u byte(s)\n", sizeof(double));
return (0);
}
