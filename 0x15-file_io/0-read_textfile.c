#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that readsa text file and print it to the posix standard output
 * @filename: name of file
 * @letters: size of file to be read
 * Return: 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd;
	ssize_t wri;
	ssize_t c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	c = read(fd, b, letters);
	wri = write(STDOUT_FILENO, b, c);

	free(b);
	close(fd);
	return (wri);
}
