#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	(void) argc;
	int total;

	if (argv[1] && argv[2])
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	else
		printf("Error\n");

	return (1);
}
