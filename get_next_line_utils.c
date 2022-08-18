/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:26:17 by kalshaer          #+#    #+#             */
/*   Updated: 2022/08/18 14:28:35 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	if (!s)
		return (0);
	size_t	r;

	r = 0;
	while (s[r])
		r++;
	return (r);
}

char	*ft_strchr(char *s, int c, size_t i)
{
	if (!s)
		return (0);
	while (s && i)
	{
		if (*s == (char)c)
			return (s);
		s++;
		i--;
	}
	return (0);
}


char	*ft_strjoin(char *s1, char *s2)
{
	char	*r;
	int		i;
	int		ii;

	if (!s1)
	{
		s1 = (char *) calloc(1, sizeof(char));
		s1[0] = 0;
	}
	r = (char *) calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!s1 || !s2 || !r)
		return (0);
	i = 0;
	ii = 0;
	while (s1[i])
		r[ii++] = s1[i++];
	i = 0;
	while (s2[i])
		r[ii++] = s2[i++];
	r[ii] = 0;
	return (r);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	if (dstsize)
	{
		i = 0;
		while (src[i] != 0 && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		if (dst[i] != 0)
			dst[i] = '\0';
	}
	return (ft_strlen(src));
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	unsigned long i;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	r = (void *) malloc(count * size);
	if (!r)
		return (0);
	while (i <= (count * size))
	{
		*((unsigned char *)r + i) = 0;
		i++;
	}
	return ((void *)r);
}
