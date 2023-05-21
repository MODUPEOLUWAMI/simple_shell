#include <stdio.h>

/**
 * main - a simple shell that reads lines from the standard input
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&line, &len, stdin);
		if (read == -1)
			break;
		printf("%s", line);
	}

	free(line);
	return (0);
}
