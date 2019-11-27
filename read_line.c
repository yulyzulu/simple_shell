#include "shell.h"
/**
*read_line- function to get the text typed by the user
*@head: string pointer
*Return: string pointer
*/
char *read_line(list_t *head)
{
	char *buff = NULL;
	size_t size = 0;
	ssize_t get;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "($) ", 4);

	get = getline(&buff, &size, stdin);

	if (get == EOF)
	{
		free(buff);
		free_list(head);
		exit(0);
	}
	return (buff);
}

