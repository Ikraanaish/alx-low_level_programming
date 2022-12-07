#include"main.h"
#include<stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: array of argumant
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t nread = 1024, nwrite, e_close;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (nread == 1024)
	{
		nread = read(file_from, buf, 1024);
		if (nread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				 exit(98);
		}
		nwrite = write(file_to, buf, nread);
		if (nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	e_close = close(file_from);

	if (e_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	e_close = close(file_to);
	if (e_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
