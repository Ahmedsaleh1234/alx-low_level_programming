#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the file to be open
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t  i;
int fd;

char *buf;
i = 0;

if (!filename || !letters)
{
return (0);
}
buf = malloc(sizeof(char) * letters);

fd = open(filename, O_RDONLY);
i = read(fd, buf, letters);
write(1, buf, i);
if (i < 0)
{
free(buf);
close(fd);
return (0);
}
if (fd == -1)
{
return (0);
}
free(buf);
close(fd);
return (i);
}
