#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, just truncate it
 * @filename: name of new file
 * @text_content: file content to write
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
	{
		return (-1);
	}

	/* if file doesn't exist create with permissions, else truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	/* return newly created file if nothing to write */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
