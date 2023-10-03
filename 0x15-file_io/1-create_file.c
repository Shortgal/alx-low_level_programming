#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: terminated string to write the file
 *
 * Return: returns 1 on success, and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, ptr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ptr = 0; text_content[ptr];)
			ptr++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, ptr);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
