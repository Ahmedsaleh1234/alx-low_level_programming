#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int l = 0;
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (!filename)
{
return (0);
}
if (fd == -1)
{
return (-1);
}
while (*text_content)
{
l++;
}
if (!l)
{
return (-1);
}
write(fd, text_content, l);
close(fd);
return (1);
}
