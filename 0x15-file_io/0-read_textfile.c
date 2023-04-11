#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return:(w)actual number of bytes read and printed 0 when filename is NULL
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *j;
	ssize_t o;
	ssize_t w;
	ssize_t t;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	j = malloc(sizeof(char) * letters);
	t = read(o, j, letters);
	w = write(STDOUT_FILENO, j, t);

	free(j);
	close(o);
	return (w);
}
