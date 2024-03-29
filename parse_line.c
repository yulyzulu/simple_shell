#include "shell.h"
/**
*parse_line- parse the string read
*@read: string pointer
*@del: delimiter
*Return: double pointer token string
*/
char **parse_line(char *read, char *del)
{
	int bufsize = 64, i = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("Error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(read, del);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		if (i >= bufsize)
		{
			bufsize = bufsize + bufsize;
			tokens = _realloc(tokens, bufsize * sizeof(char *), bufsize);
			if (!tokens)
			{
				perror("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, del);
	}
	tokens[i] = NULL;
	return (tokens);
}

