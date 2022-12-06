#include"main.h"
/**
 * read_textfile - reads a text and prints the letters
 * @filename: filename
 * @letters: num of letters printed
 *
 * Return: number of letters else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t mrd, mwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	mrd = read(fd, buf, letters);
	mwr = write(STDOUT_FILENO, buf, mrd);

	close(fd);

	free(buf);

	return (mwr);
}
