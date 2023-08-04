#include <stdio.h>

/**
*main - write a program that prints name, followed by a new line
*@argc: the argument count
*@argv: the argument vector
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

