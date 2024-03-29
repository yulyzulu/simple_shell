#include "shell.h"

/**
*concatenate_list- concatenate nodes
*@head: double pointer list_t
*@cmd: pointer
*Return: newpath or first command
*/

char *concatenate_list(list_t **head, char *cmd)
{
	list_t *temp = *head;
	char *newpath, *cmd2;

	if (cmd != NULL)
	{
		if (*cmd != '/')
		{
			while (temp)
			{
				cmd2 = string_nconcat("/", cmd, _strlen(cmd));
				newpath = string_nconcat(temp->str, cmd2, _strlen(cmd2));
				if (!access(newpath, X_OK))
				{
					free(cmd2);
					return (newpath);
				}
				free(cmd2);
				free(newpath);
				temp = temp->next;
			}
		}
	}
	newpath = _strdup(cmd);
	return (newpath);
}
