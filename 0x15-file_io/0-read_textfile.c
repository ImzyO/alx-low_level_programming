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
	int file;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, o_RDWR);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rcount = read(file, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);

	if (wcount == -1 || rcount != wcount)
		return (0);

	free(buffer);
	close(file);
	return (wcount);
}
