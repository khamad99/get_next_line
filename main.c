#include "get_next_line.h"

int main(void)
{
	int fd;
	int i = 0;
	fd = open("test.txt", O_RDWR);
	char * r = get_next_line(fd);
	while (r)
	{
		printf("%s", r);
		r = get_next_line(fd);
	}
}