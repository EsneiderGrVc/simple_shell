#include "holberton.h"

/**
* _interactive - Executes the shell interactive mode.
* Return: 0, or 127 if the command is not found.
*/

int _interactive(void)
{
	size_t size = 0;
	int re_get = 0, re_built, re_exe = 0, re_space;
	char *buffer = NULL, **array_input = NULL;

	while (re_get != EOF)
	{
		if (write(STDOUT_FILENO, "#cisfun$ ", 9) == -1)
			exit(EXIT_FAILURE);

		re_get = getline(&buffer, &size, stdin);

		if (re_get != -1 && buffer[0] != '\n')
		{
			buffer[re_get - 1] = '\0';
			re_space = space(buffer);
			re_built = _builtincalls(buffer);

			if (re_built == 2)
			{
				free(buffer);
				exit(re_exe);
			}

			if (re_built == 0 && re_space == 1)
			{
				array_input = _token(buffer, " ");
				re_exe = exe(array_input);
				free(array_input);
			}
		}
	}
	free(buffer);
	if (write(STDOUT_FILENO, "\n", 1) == -1)
		exit(EXIT_FAILURE);
	return (re_exe);
}
