#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * check_args - checks the number of arguments passed to the program
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 */
void check_args(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
}

/**
 * open_files - opens the source and destination files
 * @av: array of arguments
 * @fd_from: pointer to the file descriptor of the source file
 * @fd_to: pointer to the file descriptor of the destination file
 */
void open_files(char **av, int *fd_from, int *fd_to)
{
	*fd_from = open(av[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	*fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * copy_file - copies the content of a file to another file
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 * @av: array of arguments
 */
void copy_file(int fd_from, int fd_to, char **av)
{
	ssize_t n;
	char buf[BUFSIZE];

	while ((n = read(fd_from, buf, BUFSIZE)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
}

/**
 * close_files - closes the source and destination files
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 * Return: 0 on success, 97, 98, 99 or 100 on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	check_args(ac, av);
	open_files(av, &fd_from, &fd_to);
	copy_file(fd_from, fd_to, av);
	close_files(fd_from, fd_to);

	return (0);
}
