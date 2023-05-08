#include "main.h"

/**
 * error_read_file - checks if a file can be read
 * @file: file descriptor of the file to be read
 * @filename: name of the file to be read
 */

void error_read_file(int file, char *filename)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * error_write_file - checks if a file can be written to
 * @file: file descriptor of the file to be written to
 * @filename: name of the file to be written to
 */

void error_write_file(int file, char *filename)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - check the code provided
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fileFr, fileT, error;
	ssize_t num, written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fileFr fileT");
		exit(97);
	}

	fileFr = open(argv[1], O_RDONLY);
	error_read_file(fileFr, argv[1]);
	fileT = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_write_file(fileT, argv[2]);
	num = 1024;
	while (num == 1024)
	{
		num = read(fileFr, buf, 1024);
		if (num == -1)
			error_read_file(-1, argv[1]);

		written = write(fileT, buf, num);
		if (written == -1)
			error_write_file(-1, argv[2]);
	}

	error = close(fileFr);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFr);
		exit(100);
	}

	error = close(fileT);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileT);
		exit(100);
	}
	return (0);
}
