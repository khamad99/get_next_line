#include "get_next_line.h"

int main(void)
{
	int fd;
	int i = 0;
	fd = open("test.txt", O_RDWR);
	while (i < 6)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
}