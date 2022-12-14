#include"main.h"
/**
 * create_file - function to create file
 * @filename: filename
 * @text_content: content of text
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters = 0;
	int nrw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!text_content)
		text_content = "";

	while (text_content[nletters])
	{
		nletters++;
	}

	nrw = write(fd, text_content, nletters);

	if (nrw == -1)
		return (-1);

	close(fd);
	return (1);
}
