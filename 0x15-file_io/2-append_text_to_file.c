#include "main.h"
/**
 * append_text_to_file - function to append text to file
 * @filename: name of the file to be appended
 * @text_content: content to be appended to filename
 * Return: -1 for failure(file name ids NULL) and 1 for sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openf, writef, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	openf = open(filename, O_WRONLY | O_APPEND);
	writef = write(openf, text_content, len);

	if (openf == -1 || writef == -1)
		return (-1);

	close(openf);

	return (1);
}
