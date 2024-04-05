#include "main.h"

/**
 *create_file - create a function that create a file
 *@filename: name of file
 *@text_content: the text to print
 *Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int f, i, j;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		j = write(f, text_content, i);
		if (j == -1)
			return (-1);
	}

	close(f);
	return (1);
}
