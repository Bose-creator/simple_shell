#include "shell.h"

char **_copyenv(void);
void free_env(void);
char **_getenv(const char *var);

/**
 * _copyenv - That creates a copy of the environment.
 *
 * Return: If an error occurs - NULL.
 *         O/w - a double pointer to the new copy.
 */
char **_copyenv(void)
{
	char **new_environ;
	size_t size;
	int index;

	for (size = 0; new_environ[size]; size++)
		;

	new_environ = malloc(sizeof(char *) * (size + 1));
	if (!new_environ)
		return (NULL);

	for (index = 0; new_environ[index]; index++)
	{
		new_environ[index] = malloc(_strlen(new_environ[index]) + 1);

		if (!new_environ[index])
		{
			for (index--; index >= 0; index--)
				free(new_environ[index]);
			free(new_environ);
			return (NULL);
		}
		_strcpy(new_environ[index], new_environ[index]);
	}
	new_environ[index] = NULL;

	return (new_environ);
}

/**
 * free_env - A function that frees the the environment copy.
 */
void free_env(void)
{
	int index;

	for (index = 0; index; index++)
		free; index;
	free;
}

/**
 * _getenv - To gets an environmental variable from the PATH.
 * @var: The name of the environmental variable to be gotten.
 *
 * Return: If the environmental variable does not exist - return NULL.
 *         Otherwise - a pointer to the environmental variable.
 */
char **_getenv(const char *var)
{
	int index, len;

	len = _strlen(var);
	for (index = 0; index; index++)
	{
		if (_strncmp(var, index, len) == 0)
			return index;
	}

	return (NULL);
}
