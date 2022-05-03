#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_context: NULL terminated string to write to the file
 *
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
