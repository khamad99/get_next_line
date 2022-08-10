/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:26:34 by kalshaer          #+#    #+#             */
/*   Updated: 2022/08/09 10:58:01 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_buff (int fd, char *r)
{
	char *f;
	size_t size;

	f = (char *) malloc(BUFFER_SIZE + 1);
	if (!f)
		return (NULL);
	size = 1;

	while (!ft_strchr(r, '\n') && size)
	{
		size = read(fd, f, BUFFER_SIZE);
		if (size == -1)
		{
			free (f);
			return (NULL);
		}
		f[size] = '\0';
		r = ft_strjoin(r, f);
	}

	free(f);
	return(r);
}

char	*toprint(char *p)
{
	size_t	i;
	char	*r;

	i = 0;
	if (!p[i])
		return (NULL);
	while(p[i] != '\n' && p[i])
		i++;
	r = (char *) malloc(sizeof(char) * (i + 2));
	ft_strlcpy(r, p, (i + 2));
	return (r);
}

char	*lft(char *r)
{
	size_t len;
	size_t i;
	char *l;

	len = ft_strlen(r);
	i = 0;
	while(r[i] && r[i] != '\n')
		i++;
	if (!r[i + 1] || !r[i])
	{
		free (r);
		return (NULL);
	}
	l = (char *) malloc (sizeof(char) * (len - i));
	if (!l)
		return (NULL);
	i++;
	ft_strlcpy(l, &r[i], (len - i + 1));
	free (r);
	return (l);
}

char	*get_next_line(int fd)
{
	static char *r[1024];
	char *p;
	
	r[fd] = read_buff(fd, r[fd]);
	if (!r[fd] || BUFFER_SIZE < 0)
		return (NULL);
	p = toprint(r[fd]);
	r[fd] = lft(r[fd]);
	return (p);
	
}