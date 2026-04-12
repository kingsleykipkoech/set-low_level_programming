#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);

	return (0);
}
