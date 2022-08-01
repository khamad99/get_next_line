#include "get_next_line.h"

char	*ft_read(int fd,char *s)
{
	int size;
	size = read(fd, s, BUFFER_SIZE);
	
}

char	*get_next_line(int fd)
{
	char	*r;
	static char	*s;

	s = ft_read(fd, s);
	if (!s || BUFFER_SIZE < 0)
		return (NULL);
	
	

}
