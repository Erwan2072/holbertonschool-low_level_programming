#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: name of file
 * @text_content: the text to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, i, j;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_WRONLY | O_APPEND, 0600);
	if (f == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	j = write(f, text_content, i);
	if (j == -1)
		return (-1);

	close(f);
	return (1);
}
