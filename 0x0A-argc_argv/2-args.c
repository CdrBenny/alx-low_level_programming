#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count Arguments
 * @argv: Arguments
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int count = 0; /* Derclaring variables*/

	if (argc > 0)
	{
		while (count < argc) /*WHILE - Print each arguments */
		{
			printf("%s\n", argc[count]);

			return (0);
		}
	}
}

