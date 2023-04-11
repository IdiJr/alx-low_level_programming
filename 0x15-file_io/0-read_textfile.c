#include "main.h"

/**
 * read_textfile- Read text file print it to POSIX STDOUT.
 * @filename: text file being read
 * @letters: number of letters that are read
 * Return: actual number of letters that can be read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, wr, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(fd);
	return (wr);
}
