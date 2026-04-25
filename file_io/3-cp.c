#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - prints error messages and exits with specific code.
 * @code: exit code.
 * @fmt: format string for dprintf.
 * @arg: argument for format string.
 * @fd: file descriptor to close if needed.
 */
void error_exit(int code, const char *fmt, const char *arg, int fd)
{
	dprintf(STDERR_FILENO, fmt, arg);
	if (fd != -1)
		close(fd);
	exit(code);
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, n_read, n_wrote;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);

	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
		n_wrote = write(fd_to, buffer, n_read);
		if (n_wrote != n_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);
	}

	if (n_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], fd_from);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
