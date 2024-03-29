#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The NULL terminated string to add to the end of the file.
 *
 * Return: 1 on success, If the function fails or filename is NULL -1.
 * If the file does not exist the user lacks write permissions  -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wr, numletters = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (numletters = 0; text_content[numletters];)
			numletters++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, numletters);

	if (o == -1)
		return (-1);
	if (wr == -1)
		return (-1);
	close(o);
	return (1);
}
