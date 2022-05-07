#include "main.h"
/**
 * main - Entry Point
 * @argc: argument counts
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fle_from, fle_to, fle_from_r, wr_err;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fle_from = open(argv[1], O_RDONLY);
	if (fle_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fle_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fle_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (fle_from_r >= 1024)
	{
		fle_from_r = read(fle_from, buff, 1024);
		if (fle_from_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close_fle(fle_from);
			close_fle(fle_to);
			exit(98);
		}
		wr_err = write(fle_to, buff, fle_from_r);
		if (wr_err == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_fle(fle_from);
	close_fle(fle_to);
	return (0);
}
/**
 * close_fle - close with error
 * @arg_files: argv 1 or 2
 * Return: void
 */
void close_fle(int arg_files)
{
	int close_err;

	close_err = close(arg_files);

	if (close_err == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", arg_files);
		exit(100);
	}
}
