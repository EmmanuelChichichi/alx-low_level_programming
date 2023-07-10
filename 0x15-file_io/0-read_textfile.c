#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters:  number of letters it should read and print
 * Return: letters \0/
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, br, bw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	br = read(fd, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	close(fd);
	free(buffer);

	return (bw);
}
