#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 * Return: 0 on success, 97, 98, 99 or 100 on error
 */
int main(int ac, char **av)
{
    int fd_from, fd_to;
    ssize_t n;
    char buf[BUFSIZE];

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
        exit(97);
    }
    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }
    fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit(99);
    }
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
    return (0);
}
