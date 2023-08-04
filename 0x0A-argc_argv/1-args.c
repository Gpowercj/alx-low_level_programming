#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @argc: the argument count
 * @argv:  is the argument vector
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
