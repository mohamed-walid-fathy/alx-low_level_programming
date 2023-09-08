#include <unistd.h>
/**
*main - Entry point
*
*Description: A C program that prints a sentence using an array of chars
*It uses the write function
*Return: 1 in case of error
**/
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
