#include "main.h"

/**
 *read_textfile - a function that reads a text file,prints it to the POSIX
 *@filename: file name to read
 *@letters: the number of letters it should  print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed, read_char;
	ssize_t fl;
	char *buffer;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_char = read(fl, buffer, letters);
	printed = write(STDOUT_FILENO, buffer, read_char);
	free(buffer);
	close(fl);
	return (printed);
}
