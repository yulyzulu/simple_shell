#include "shell.h"
#include <stdio.h>
/**
*read_line- function to get the text typed by the user
*@head: string pointer
*Return: string pointer
*/
char *read_line(list_t *head)
{
	char *buff = NULL;
	size_t size = 0;

	write(STDOUT_FILENO, "($) ", 4);
	if (getline(&buff, &size, stdin) == EOF)
	{
		free(buff);
		free_list(head);
		write(STDOUT_FILENO, "logout\n", 7);
		exit(0);
	}
	return (buff);
}

