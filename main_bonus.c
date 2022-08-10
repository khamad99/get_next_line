#include "get_next_line.h"

int main(void)
{
	int fd;
	int fd2;
	int fd3;
	int i = 0;
	int ii = 0;
	int iii = 0;
	fd = open("test.txt", O_RDWR);
	fd2 = open("test2.txt", O_RDWR);
	fd3 = open("test3.txt", O_RDWR);
	while (i < 6)
	{
		printf("%s", get_next_line(fd));
		while (ii < 6)
		{
			printf("%s", get_next_line(fd2));
			while (iii < 6)
			{
				printf("%s", get_next_line(fd3));
				iii++;
			}
			printf("%s", get_next_line(fd2));
			ii++;
		}
		printf("%s", get_next_line(fd));
		i++;
	}
}