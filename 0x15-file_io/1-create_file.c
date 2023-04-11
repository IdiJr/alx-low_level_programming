#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a NULL terminnated string to write to the file.
 *
 * Return: 1 on succes and -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, numletters = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (numletters = 0; text_content[numletters];)
			numletters++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, numletters);
	if (fd == -1)
		return (-1);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
