#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers
*if the program dpes not receive two arguments, it should print Error
*@argc: the argument count
*@argv: the argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;


		if (argc == 3)
		{
			for (i = 1; i < argc; i++)
			{
			mul = mul * atoi(argv[i]);
			}
			printf("%d\n", mul);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

}
