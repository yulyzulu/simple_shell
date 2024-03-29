#include "shell.h"

/**
* built_in_command - execute the built in functions.
* @av: The argument to compare.
* @env: Environment.
* @read: The buffer.
* @head: The linked list.
* Return: nothing.
*/

void built_in_command(char **av, char **env, char *read, list_t *head)
{
	unsigned int i = 0;

	if (av[0] != NULL)
	{
		if ((_strcmp(av[0], "env")) == 0)
		{
			while (env[i] != NULL)
			{
				write(STDOUT_FILENO, env[i], _strlen((env[i])));
				write(STDOUT_FILENO, "\n", 1);
				i++;
			}
		}
		if ((_strcmp(av[0], "exit")) == 0)
		{
			free(read);
			free(av);
			free_list(head);
			exit(0);
		}
	}
}
