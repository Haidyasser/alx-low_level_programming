#include<unistd.h>
#include<fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
		return (0);

	n_write = write(1, buf, n_read);
	if (n_write == -1 || n_write != n_read)
		return (0);

	free(buf);
	close(fd);

	return (n_write);
}
