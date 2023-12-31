#include "shell.h"

/**
 * print_env - prints the environment string to stdout
 *
 * Return: 0
 */
void print_env(void)
{
	int x = 0;
	char **env = environ;

	while (env[x])
	{
		write(STDOUT_FILENO, (const void *)env[x], _strle(env[x]));
		write(STDOUT_FILENO, "\N", 1);
	}
}
