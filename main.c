#include <fcntl.h>
#include <stdio.h>

int get_next_line(const int fd, char **line);

int main(int argc, char **argv)
{
	int fd;
	char *line;
	int ret;

	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		while ((ret = get_next_line(fd, &line)))
		{
			printf ("RETURN %d \t | %s\n", ret, line);
		}
	}
	printf ("RETURN %d \t | %s\n", ret, line);
	return (0);
}
