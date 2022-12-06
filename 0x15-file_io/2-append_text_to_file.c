#include"main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success and -1 on failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters = 0;
	int nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (text_content)
		text_content = "";
	while (text_content[nletters])
	{
		nletters++;
	}
	nwr = write(fd, text_content, nletters);
	if (nwr == -1)
		return (-1);

	close(fd);
	return (1);

}
