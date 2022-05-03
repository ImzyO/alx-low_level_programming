#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: letters, 0 if file can not be opened or read, 0 if
 * write fails or does not write expected byte amount,
 * 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read, n_write;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	n_read = read(fd, s, letters);
	if (n_read == -1)
	{
		free(s);
		return (0);
	}
	n_write = write(STDOUT_FILENO, s, n_read);
	clode(fd);
	free(s);
	if (n_read == n_write)
		return (n_write);
	return (0);
}
