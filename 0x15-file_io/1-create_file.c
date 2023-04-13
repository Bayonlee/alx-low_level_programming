#include "main.h"
#include <stdlib.h>
/**
 * create_file - function to create file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success -1 on null
 */
int create_file(const char *filename, char *text_content)
{
	int fileop, wri, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileop = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri = write(fileop, text_content, len);

	if (fileop == -1 || wri == -1)
		return (-1);

	close(fileop);

	return (1);
}
